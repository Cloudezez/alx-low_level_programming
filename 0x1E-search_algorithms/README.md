# Binary Search Algorithm Project

This project implements the binary search algorithm in C, demonstrating how to search for a value in a sorted array. The binary search algorithm is an efficient way to find an element in a sorted array by repeatedly dividing the search interval in half.

## Project Overview

The project includes the following files:
- `1-main.c`: Contains the `main` function that tests the `binary_search` function.
- `1-binary.c`: Implements the `binary_search` function.
- `search_algos.h`: Header file that declares the `binary_search` function.

## Functionality

- **binary_search**: This function performs a binary search on a sorted array to find the index of a given value. If the value is not present or if the array is NULL, the function returns -1.

### Function Prototype

```c
int binary_search(int *array, size_t size, int value);

