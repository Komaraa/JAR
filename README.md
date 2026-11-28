
# Robot Supervisor

Tableau de supervision d'un robot simulé.

## Prérequis

- C++20
- CMake >= 3.22
- Catch2 v3

## Build

cmake -S backend -B build
cmake --build build

## Tests

ctest --test-dir build
