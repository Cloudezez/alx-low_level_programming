# Binary Search Algorithm in C

This project implements a binary search algorithm in C. The binary search algorithm is used to efficiently find the index of a target value within a sorted array. This implementation adheres to the Betty style guide and avoids using global variables or non-standard library functions beyond `printf`.

## Project Files

- **`1-main.c`**: Contains the `main` function for testing the `binary_search` function.
- **`1-binary.c`**: Implements the `binary_search` function.
- **`search_algos.h`**: Header file declaring the `binary_search` function.

## Function Overview

### `int binary_search(int *array, size_t size, int value)`

Searches for `value` in a sorted array `array` of size `size`.

#### Parameters:
- `array`: Pointer to the first element of the sorted array.
- `size`: Number of elements in the array.
- `value`: The value to search for.

#### Returns:
- The index of `value` if found.
- `-1` if `value` is not present or if `array` is NULL.

#### Details:
- The function performs a binary search and prints the subarrays being searched during the process.

## Compilation

To compile the code, use the following command:

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary

