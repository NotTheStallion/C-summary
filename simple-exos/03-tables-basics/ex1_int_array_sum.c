/*
 * EXERCISE 1: Sum of integers in an array
 * 
 * Write a function sum_array() that:
 *   - Takes an int array and its size
 *   - Returns the sum of all elements
 * 
 * In main():
 *   - Create an int array with at least 5 values
 *   - Print the sum
 */

#include <stdio.h>

int sum_array(int arr[], int size) {
    // TODO: loop through array and return sum
    return 0;
}

int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("Sum: %d\n", sum_array(numbers, size));
    
    return 0;
}