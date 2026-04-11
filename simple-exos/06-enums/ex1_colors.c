/*
 * EXERCISE 1: Basic enum with switch
 * 
 * Create an enum Color with values: RED, GREEN, BLUE
 * 
 * Write a function color_to_string() that:
 *   - Takes a Color
 *   - Returns a char* with the color name (use switch)
 * 
 * Write a function get_complement() that:
 *   - Takes a Color
 *   - Returns its complementary color (RED->BLUE, GREEN->RED, BLUE->GREEN)
 * 
 * In main():
 *   - Try each color
 *   - Print the color and its complement
 */

#include <stdio.h>

typedef enum {
    // TODO: define RED, GREEN, BLUE
} Color;

char* color_to_string(Color c) {
    // TODO: switch on c, return appropriate string
    return NULL;
}

Color get_complement(Color c) {
    // TODO: switch on c, return complementary color
    return RED;
}

int main(void) {
    Color colors[] = {RED, GREEN, BLUE};
    int size = sizeof(colors) / sizeof(colors[0]);
    
    for (int i = 0; i < size; i++) {
        Color c = colors[i];
        Color comp = get_complement(c);
        printf("%s -> complement: %s\n", color_to_string(c), color_to_string(comp));
    }
    
    return 0;
}