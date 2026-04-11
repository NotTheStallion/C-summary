/*
 * EXERCISE 2: Resizable array with realloc
 * 
 * Write a function grow_array() that:
 *   - Takes an int* array, current size, and new size
 *   - Uses realloc to resize the array
 *   - Returns the new pointer
 * 
 * In main():
 *   - Start with size 3, allocate and fill with 1, 2, 3
 *   - Print the array
 *   - Grow to size 6, add values 4, 5, 6
 *   - Print the expanded array
 *   - Free the array
 */

#include <stdio.h>
#include <stdlib.h>

int* grow_array(int* arr, int oldSize, int newSize) {
    // TODO: use realloc to resize, return new pointer
    return NULL;
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int size = 3;
    int* arr = malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    
    printf("Original (size %d): ", size);
    print_array(arr, size);
    
    int newSize = 6;
    arr = grow_array(arr, size, newSize);
    
    for (int i = size; i < newSize; i++) {
        arr[i] = i + 1;
    }
    
    printf("Expanded (size %d): ", newSize);
    print_array(arr, newSize);
    
    free(arr);
    
    return 0;
}