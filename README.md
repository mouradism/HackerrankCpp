# HackerRank C++ Solutions

A collection of C++ solutions to [HackerRank](https://www.hackerrank.com/) problems covering core language features and the Standard Template Library (STL).

## Topics Covered

| File | Topic | Description |
|------|-------|-------------|
| `BasicDataTypes.cpp` | Basics | Demonstrates C++ primitive data types: `int`, `long`, `char`, `float`, and `double` |
| `InputandOutput.cpp` | Basics | Reads three integers and prints their sum |
| `ConditionalStatements.cpp` | Conditionals | Maps an integer to its English word representation, or classifies it as even/odd |
| `ForLoop.cpp` | Loops | Iterates over a range and converts numbers to text (one–nine) or classifies them as even/odd |
| `Functions.cpp` | Functions | Returns the maximum of four integers |
| `Pointer.cpp` | Pointers | Swaps two values and computes their sum and absolute difference using pointers |
| `ArraysIntroduction.cpp` | Arrays | Reads an array and prints it in reverse |
| `Strings.cpp` | Strings | Concatenates two strings and swaps their first characters |
| `StringStream.cpp` | Strings / STL | Parses a comma-separated string of integers into a vector using `std::stringstream` |
| `Structs.cpp` | Structs | Defines a `Student` struct with `age`, `first_name`, `last_name`, and `standard` fields |
| `Class.cpp` | Classes | Implements a `Student` class with private members and public getters/setters |
| `ClassesandObjects.cpp` | Classes | Student class that stores five test scores and computes the total |
| `0.cpp` | Classes | `Box` class with default, parameterized, and copy constructors, plus dimension getters |
| `Vector-Sort.cpp` | STL – Vector | Reads integers into a vector and sorts them in ascending order |
| `Vector-Erase.cpp` | STL – Vector | Erases elements from a vector by single index and by range |
| `VariableSizedArrays.cpp` | STL – Vector | Builds a jagged 2-D array (vector of vectors) and answers element queries |
| `Maps-STL.cpp` | STL – Map | Manages a `map<string, int>` with insert, erase, and find operations |
| `LowerBound-STL.cpp` | STL – Algorithm | Uses `std::lower_bound` on a sorted vector to search for a target value |

## Prerequisites

- A C++ compiler that supports **C++11** or later (e.g., `g++`, `clang++`)

## Compiling and Running

```bash
g++ -std=c++14 -o solution <filename>.cpp
./solution
```

For example:

```bash
g++ -std=c++14 -o sort Vector-Sort.cpp
./sort
```

## License

This project is open source and available under the [MIT License](LICENSE).
