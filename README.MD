# Documentação da Biblioteca AoCPC

## O que é a biblioteca AoCPC?
A **Biblioteca AoCPC** é uma biblioteca em C++ feita para ajudar você a escrever código mais rápido e organizado em competições de programação.  
Ela traz ferramentas úteis como entrada/saída rápida, ajuda na depuração e estruturas e algoritmos comuns.

## Como Instalar

- Existe uma pasta chamada `aocpc` dentro da pasta `ac-library`, após extrair o arquivo ZIP.
- Com o g++, você pode compilar usando `g++ main.cpp -std=c++14 -I .`, colocando a pasta `atcoder` no mesmo diretório que o `main.cpp`.
  - É necessário compilar com `-std=c++14` ou `-std=c++17`.
- Consulte o [Apêndice](./docs/appendix.md) para mais detalhes.

## Lista de Componentes

`#include <aocpc/all>` : inclui todas as funcionalidades

### Depurador (Debugger)
- [`#include <atcoder/debug>`](./docs/debug.md) : ferramentas para depuração
___
# AoCPC Library Documentation

## What is AoCPC Library?
**AoCPC Library** is a C++ library designed to help you write faster and cleaner code for competitive programming problems.  
It includes useful tools like fast input/output, debugging helpers, and commonly used algorithms and data structures.

## Installation Guide

- After extracting the zip file, locate the `aocpc` folder inside the `ac-library` directory.
- For compilation with g++:
  - Place the `atcoder` folder in the same directory as your `main.cpp` file
  - Use the command: `g++ main.cpp -std=c++14 -I .`
  - Note: You must compile with either `-std=c++14` or `-std=c++17` flag
- For additional details, please refer to the [Appendix](./docs/appendix.md).

## Library Components

### Include All
`#include <aocpc/all>` - Includes all library components

### Debugging Tools
- [`#include <atcoder/debug>`](./docs/debug.md) - Debugging utilities documentation