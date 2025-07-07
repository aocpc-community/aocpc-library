#ifndef AOCPC_DEBUG
#define AOCPC_DEBUG

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <bitset>
#include <utility>
#include <tuple>
#include <array>
#include <cassert>

using namespace std;

namespace aocpc {
    typedef long long ll;
    typedef unsigned long long ull;
    typedef long double ld;

    // Primitive types
    void display(ll t) { cerr << t; }
    void display(int t) { cerr << t; }
    void display(string t) { cerr << t; }
    void display(char t) { cerr << t; }
    void display(ld t) { cerr << t; }
    void display(double t) { cerr << t; }
    void display(ull t) { cerr << t; }
    void display(bool t) { cerr << (t ? "true" : "false"); }

    // Forward declarations for containers
    template <class T, class V> void display(pair<T, V> p);
    template <class T> void display(vector<T> v);
    template <class T> void display(deque<T> v);
    template <class T> void display(list<T> v);
    template <class T> void display(set<T> v);
    template <class T> void display(multiset<T> v);
    template <class T> void display(unordered_set<T> v);
    template <class T> void display(unordered_multiset<T> v);
    template <class T, class V> void display(map<T, V> v);
    template <class T, class V> void display(unordered_map<T, V> v);
    template <class T, size_t N> void display(array<T, N> v);
    template <class T> void display(stack<T> v);
    template <class T> void display(queue<T> v);
    template <class T> void display(priority_queue<T> v);
    template <size_t N> void display(bitset<N> v);
    template <class... T> void display(tuple<T...> t);

    // Container implementations with perfect spacing
    template <class T, class V> void display(pair<T, V> p) {
        cerr << "{ "; display(p.first); cerr << ", "; display(p.second); cerr << " }";
    }
    
    template <class T> void display(vector<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(deque<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(list<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(set<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(multiset<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(unordered_set<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(unordered_multiset<T> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T, class V> void display(map<T, V> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T, class V> void display(unordered_map<T, V> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T, size_t N> void display(array<T, N> v) {
        cerr << "[ ";
        bool first = true;
        for (const auto& i : v) {
            if (!first) cerr << ", ";
            display(i);
            first = false;
        }
        cerr << " ]";
    }
    
    template <class T> void display(stack<T> v) {
        vector<T> temp;
        while (!v.empty()) { temp.push_back(v.top()); v.pop(); }
        reverse(temp.begin(), temp.end());
        display(temp);
    }
    
    template <class T> void display(queue<T> v) {
        vector<T> temp;
        while (!v.empty()) { temp.push_back(v.front()); v.pop(); }
        display(temp);
    }
    
    template <class T> void display(priority_queue<T> v) {
        vector<T> temp;
        while (!v.empty()) { temp.push_back(v.top()); v.pop(); }
        display(temp);
    }
    
    template <size_t N> void display(bitset<N> v) {
        cerr << "[ " << v.to_string() << " ]";
    }
    
    template <size_t I = 0, typename... T>
    typename enable_if<I == sizeof...(T), void>::type
    display_tuple(const tuple<T...>&) {}
    
    template <size_t I = 0, typename... T>
    typename enable_if<I < sizeof...(T), void>::type
    display_tuple(const tuple<T...>& t) {
        if (I != 0) cerr << ", ";
        display(get<I>(t));
        display_tuple<I + 1, T...>(t);
    }
    
    template <class... T> void display(tuple<T...> t) {
        cerr << "{ ";
        display_tuple(t);
        cerr << " }";
    }

    // Debug output
    void debug_out() { cerr << endl; }
    
    template <typename Head, typename... Tail>
    void debug_out(Head H, Tail... T) {
        cerr << " ";
        display(H);
        debug_out(T...);
    }

    #define dbg(...) cerr << "[ " << #__VA_ARGS__ << " ]:", debug_out(__VA_ARGS__)
} // namespace aocpc

#else
#define dbg(...) 42
#endif