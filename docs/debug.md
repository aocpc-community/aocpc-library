# Depuração com a Macro `dbg`

## Introdução
A macro `dbg` fornece uma maneira poderosa de depurar seu código C++ imprimindo valores de variáveis e expressões com seus nomes.

## Uso Básico

```cpp
#include "aocpc/all"

using namespace aocpc;

int main() {
    int x = 42;
    string s = "hello";
    vector<int> v = {1, 2, 3};
    
    dbg(x);          // Imprime: [ x ]: 42
    dbg(s);          // Imprime: [ s ]: hello
    dbg(v);          // Imprime: [ v ]: [ 1, 2, 3 ]
    dbg(x + 10, s);  // Imprime: [ x + 10, s ]: 52 hello
    
    return 0;
}
```
----
# Debugging with `dbg` Macro

## Introduction
The `dbg` macro provides a powerful way to debug your C++ code by printing variable values and expressions with their names.

## Basic Usage

```cpp
#include "aocpc/all"

using namespace aocpc;

int main() {
    int x = 42;
    string s = "hello";
    vector<int> v = {1, 2, 3};
    
    dbg(x);          // Prints: [ x ]: 42
    dbg(s);          // Prints: [ s ]: hello
    dbg(v);          // Prints: [ v ]: [ 1, 2, 3 ]
    dbg(x + 10, s);  // Prints: [ x + 10, s ]: 52 hello
    
    return 0;
}
```
----
## Submission in an online judge

```cpp
#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "aocpc/all"
using namespace aocpc;
#else
#define dbg(...)
#endif

int main() {
    int x = 42;
    string s = "hello";
    vector<int> v = {1, 2, 3};
    
    dbg(x);          // Prints: [ x ]: 42
    dbg(s);          // Prints: [ s ]: hello
    dbg(v);          // Prints: [ v ]: [ 1, 2, 3 ]
    dbg(x + 10, s);  // Prints: [ x + 10, s ]: 52 hello
    
    return 0;
}
```