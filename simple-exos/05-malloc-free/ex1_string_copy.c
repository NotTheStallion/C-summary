/*
 * EXERCISE 1: String copy with malloc
 * 
 * Write a function my_strdup() that:
 *   - Takes a char* string
 *   - Uses malloc to allocate a new string
 *   - Copies the original string into the new one
 *   - Returns the new string (char*)
 * 
 * In main():
 *   - Call my_strdup with "Hello World"
 *   - Print the duplicated string
 *   - Free the duplicated string
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(char* str) {
    // TODO: malloc new string, copy content, return
    return NULL;
}

int main(void) {
    char* original = "Hello World";
    char* duplicate = my_strdup(original);
    
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    
    free(duplicate);
    
    return 0;
}