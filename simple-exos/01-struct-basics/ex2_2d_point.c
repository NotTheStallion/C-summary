/*
 * EXERCISE 2: Calculate distance between two 2D points
 * 
 * Create a struct Point with fields:
 *   - x (double)
 *   - y (double)
 * 
 * Write a function distance() that takes two Point* and returns
 * the Euclidean distance between them.
 * 
 * In main():
 *   - Create two Point variables
 *   - Ask user for coordinates
 *   - Print the distance
 */

#include <stdio.h>
#include <math.h>

typedef struct {
    // TODO: add fields
} Point;

double distance(Point* p1, Point* p2) {
    // TODO: calculate and return Euclidean distance
    return 0.0;
}

int main(void) {
    Point p1, p2;
    
    printf("Point 1 - x: ");
    scanf("%lf", &p1.x);
    printf("Point 1 - y: ");
    scanf("%lf", &p1.y);
    
    printf("Point 2 - x: ");
    scanf("%lf", &p2.x);
    printf("Point 2 - y: ");
    scanf("%lf", &p2.y);
    
    printf("\nDistance: %.2f\n", distance(&p1, &p2));
    
    return 0;
}