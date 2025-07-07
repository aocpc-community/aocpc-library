# Apêndice / FAQ

## Ambientes

- Não use macros que começam com `AOCPC_`.
- Embora tenhamos buscado fazer funcionar em vários ambientes, é necessária alguma extensão do C++. Assumimos o seguinte:
  - `__int128 / unsigned __int128(g++, clang++)` ou `_mul128 / _umul128(Visual Studio)` funcionam.
  - `__builtin_(ctz/ctzll/clz/clzll/popcount)(g++, clang++)` ou `_BitScan(Forward/Reverse)(Visual Studio)` funcionam.

## Como Instalar
### g++ / clang++

A maneira mais fácil é colocar a pasta `aocpc` no mesmo local que `main.cpp` e executar `g++ main.cpp -std=c++14 -I .`, como mencionado no índice. Aqui, `.` é o símbolo que representa o diretório atual (você deve digitar um espaço e um ponto após `I`).

Se você não quiser copiar a pasta `aocpc` manualmente, faça o seguinte:

- Especifique o comando como `g++ main.cpp -std=c++14 -I /caminho/para/aocpc-library` (`/caminho/para/aocpc-library` representa o diretório onde a biblioteca aocpc foi baixada).
- Especifique o local da pasta `aocpc` usando a variável de ambiente `CPLUS_INCLUDE_PATH` como `CPLUS_INCLUDE_PATH="/caminho/para/ac-library"`. (No Windows, digite algo como `C:\caminho\para\ac-library` no campo da variável `CPLUS_INCLUDE_PATH` na [Janela de Variáveis de Ambiente](https://img.aocpc.jp/practice2/01333b7c5575b09b5868376ef242aa52.png). Observe que você deve usar barras invertidas, não barras normais.) Depois, você pode compilar apenas com `g++ main.cpp -std=c++14`.

### Visual Studio
[Windows]
Visual Studio 2019 / 2022 é suportado. Atualize-o se estiver usando uma versão antiga.

Se o Visual Studio estiver instalado, haverá uma pasta como a seguinte:

- `C:\Program Files\Microsoft Visual Studio\2022\(Community, Professional ou Enterprise)\VC\Tools\MSVC\(Algum número, ex. 14.35.32215)\include`
- `C:\Program Files (x86)\Microsoft Visual Studio\2019\(Community, Professional ou Enterprise)\VC\Tools\MSVC\(Algum número, ex. 14.27.29110)\include`

Copie a pasta `aocpc` para lá, ou seja, coloque-a de forma que o caminho fique assim:

- `C:\Program Files\Microsoft Visual Studio\2022\(Community, Professional ou Enterprise)\VC\Tools\MSVC\(Algum número, ex. 14.35.32215)\include\aocpc\dsu.hpp`

[Mac]

[Linux]

### Exemplo de Uso do Debug

```cpp
#include "aocpc/all"
#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>

using namespace std;
using namespace aocpc;

int main() {
    // vector
    vector<int> vec = {1, 2, 3, 4};
    dbg(vec);  // [ vec ]: [ 1, 2, 3, 4 ]

    // array
    array<string, 3> arr = {"Hello", "World", "!"};
    dbg(arr);  // [ arr ]: [ Hello, World, ! ]

    // list
    list<double> lst = {1.1, 2.2, 3.3};
    dbg(lst);  // [ lst ]: [ 1.1, 2.2, 3.3 ]

    // set
    set<int> s = {4, 2, 1, 3};
    dbg(s);  // [ s ]: [ 1, 2, 3, 4 ] (ordenado)

    // map
    map<string, int> m = {{"Alice", 25}, {"Bob", 30}};
    dbg(m);  // [ m ]: [ { Alice, 25 }, { Bob, 30 } ]

    // unordered Set
    unordered_set<int> us = {5, 2, 8};
    dbg(us);  // [ us ]: [ 8, 2, 5 ]

    // unordered Map
    unordered_map<string, float> um = { { "pi", 3.14f}, { "e", 2.71f}};
    dbg(um);  // [ um ]: [ { e, 2.71 }, { pi, 3.14 } ]

    // stack
    stack<int> stk; stk.push(1); stk.push(2); stk.push(3);
    dbg(stk);  // [ stk ]: [ 1, 2, 3 ]

    // queue
    queue<char> q; q.push('a'); q.push('b'); q.push('c');
    dbg(q);  // [ q ]: [ a, b, c ]

    // pair
    pair<int, string> p = {42, "answer"};
    dbg(p);  // [ p ]: { 42, answer }

    // tuple
    tuple<int, string, double> t = {1, "two", 3.0};
    dbg(t);  // [ t ]: { 1, two, 3 }

    return 0;
}
____
# Appendix / FAQ

## Environments

- Do not use the macro beginning with `AOCPC_`.
- Although we aimed to make it work in many environments, it requires some C++ extension. We assume the following.
  - `__int128 / unsigned __int128(g++, clang++)` or `_mul128 / _umul128(Visual Studio)` works.
  - `__builtin_(ctz/ctzll/clz/clzll/popcount)(g++, clang++)` or `_BitScan(Forward/Reverse)(Visual Studio)` works.

## How to Install

### g++ / clang++

The easiest way is to put `aocpc` folder in the same place as `main.cpp` and execute `g++ main.cpp -std=c++14 -I .`, as noted in the index. Here, `.` is the symbol that represents the current directory (you should type a space and a period after `I`).

If you don't want to copy `aocpc` folder manually, do as follows.

- Specify the command like `g++ main.cpp -std=c++14 -I /path/to/aocpc-library` (`/path/to/aocpc-library` stands for the directory where the downloaded aocpc-library is located).
- Specify the place of `aocpc` folder by the environment variable `CPLUS_INCLUDE_PATH` as `CPLUS_INCLUDE_PATH="/path/to/ac-library"`. (On Windows, type like `C:\path\to\ac-library` in the field of the variable `CPLUS_INCLUDE_PATH` on the [Window of Environment Variables](https://img.aocpc.jp/practice2/01333b7c5575b09b5868376ef242aa52.png). Note that, you should use backslashes, not slashes.) Then, you can compile just by `g++ main.cpp -std=c++14`.

### Visual Studio

Visual Studio 2019 / 2022 is supported. Update it if you are using old Visual Studio.

If Visual Studio is installed, there is a folder like the following.

- `C:\Program Files\Microsoft Visual Studio\2022\(Community, Professional or Enterprise)\VC\Tools\MSVC\(Some number, e.g. 14.35.32215)\include`
- `C:\Program Files (x86)\Microsoft Visual Studio\2019\(Community, Professional or Enterprise)\VC\Tools\MSVC\(Some number, e.g. 14.27.29110)\include`

Copy `aocpc` folder into it, i.e., put it so that the path will be as follows.

- `C:\Program Files\Microsoft Visual Studio\2022\(Community, Professional or Enterprise)\VC\Tools\MSVC\(Some number, e.g. 14.35.32215)\include\aocpc\dsu.hpp`

### Sample Usage of Debug

```cpp
#include "aocpc/all"
#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>

using namespace std;
using namespace aocpc;

int main() {
    // vector
    vector<int> vec = {1, 2, 3, 4};
    dbg(vec);  // [ vec ]: [ 1, 2, 3, 4 ]

    // array
    array<string, 3> arr = {"Hello", "World", "!"};
    dbg(arr);  // [ arr ]: [ Hello, World, ! ]

    // list
    list<double> lst = {1.1, 2.2, 3.3};
    dbg(lst);  // [ lst ]: [ 1.1, 2.2, 3.3 ]

    // set
    set<int> s = {4, 2, 1, 3};
    dbg(s);  // [ s ]: [ 1, 2, 3, 4 ] (sorted)

    // map
    map<string, int> m = {{"Alice", 25}, {"Bob", 30}};
    dbg(m);  // [ m ]: [ { Alice, 25 }, { Bob, 30 } ]

    // unordered Set
    unordered_set<int> us = {5, 2, 8};
    dbg(us);  // [ us ]: [ 8, 2, 5 ]

    // unordered Map
    unordered_map<string, float> um = { { "pi", 3.14f}, { "e", 2.71f}};
    dbg(um);  // [ um ]: [ { e, 2.71 }, { pi, 3.14 } ]

    // stack
    stack<int> stk; stk.push(1); stk.push(2); stk.push(3);
    dbg(stk);  // [ stk ]: [ 1, 2, 3 ]

    // queue
    queue<char> q; q.push('a'); q.push('b'); q.push('c');
    dbg(q);  // [ q ]: [ a, b, c ]

    // pair
    pair<int, string> p = {42, "answer"};
    dbg(p);  // [ p ]: { 42, answer }

    // tuple
    tuple<int, string, double> t = {1, "two", 3.0};
    dbg(t);  // [ t ]: { 1, two, 3 }

    return 0;
}
```