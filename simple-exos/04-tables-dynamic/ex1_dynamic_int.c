/*
 * EXERCISE 1: Dynamic integer array
 * 
 * Write a function create_int_array() that:
 *   - Takes a size (int)
 *   - Uses malloc to allocate an int array of that size
 *   - Returns the pointer
 * 
 * Write a function fill_array() that:
 *   - Takes an int* array and its size
 *   - Fills it with values 1, 2, 3, ... n
 * 
 * Write a function free_array() that:
 *   - Frees the array
 * 
 * In main():
 *   - Create a dynamic array of size 5
 *   - Fill it
 *   - Print all values
 *   - Free it
 */

#include <stdio.h>
#include <stdlib.h>

int* create_int_array(int size) {
    // TODO: malloc int array, return pointer
    return NULL;
}

void fill_array(int* arr, int size) {
    // TODO: fill with 1, 2, 3, ... n
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void free_array(int* arr) {
    // TODO: free the array
}

int main(void) {
    int size = 5;
    int* arr = create_int_array(size);
    
    fill_array(arr, size);
    print_array(arr, size);
    
    free_array(arr);
    
    return 0;
}