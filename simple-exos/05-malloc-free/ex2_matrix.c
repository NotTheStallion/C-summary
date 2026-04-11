/*
 * EXERCISE 2: 2D matrix with double malloc
 * 
 * Write a function create_matrix() that:
 *   - Takes rows and cols
 *   - Allocates an array of pointers (rows)
 *   - For each row, allocates an array of ints (cols)
 *   - Returns the 2D array as int**
 * 
 * Write a function free_matrix() that:
 *   - Frees each row first, then the array of pointers
 * 
 * In main():
 *   - Create a 3x4 matrix
 *   - Fill with row*col values
 *   - Print the matrix
 *   - Free properly
 */

#include <stdio.h>
#include <stdlib.h>

int** create_matrix(int rows, int cols) {
    // TODO: malloc int* array, malloc each row, return
    return NULL;
}

void fill_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }
}

void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void free_matrix(int** matrix, int rows) {
    // TODO: free each row, then free the pointer array
}

int main(void) {
    int rows = 3, cols = 4;
    int** matrix = create_matrix(rows, cols);
    
    fill_matrix(matrix, rows, cols);
    print_matrix(matrix, rows, cols);
    
    free_matrix(matrix, rows);
    
    return 0;
}