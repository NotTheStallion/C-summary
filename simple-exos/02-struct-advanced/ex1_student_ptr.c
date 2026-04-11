/*
 * EXERCISE 1: Student with dynamic allocation
 * 
 * Create a struct Student with fields:
 *   - name (char pointer)
 *   - age (int)
 *   - grade (double)
 * 
 * Write a function create_student() that:
 *   - Takes name (char*), age, grade as parameters
 *   - Uses malloc to allocate a Student
 *   - Allocates memory for name and copies the string
 *   - Returns Student*
 * 
 * Write a free_student() function to free all allocated memory.
 * 
 * In main():
 *   - Create a student using create_student()
 *   - Print its info
 *   - Free it properly
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    // TODO: add fields
} Student;

Student* create_student(char* name, int age, double grade) {
    // TODO: malloc Student, malloc name, copy string, return
    return NULL;
}

void free_student(Student* s) {
    // TODO: free name, then free Student
}

int main(void) {
    Student* s = create_student("Alice", 20, 85.5);
    
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Grade: %.1f\n", s->grade);
    
    free_student(s);
    
    return 0;
}