/*
 * EXERCISE 2: Enum with struct - Task priority system
 * 
 * Create an enum Priority with values: LOW, MEDIUM, HIGH, URGENT
 * 
 * Create a struct Task with fields:
 *   - description (char[100])
 *   - priority (Priority)
 * 
 * Write a function create_task() that:
 *   - Takes description (char*) and priority (Priority)
 *   - Creates a Task on the heap with malloc
 *   - Copies description using strcpy
 *   - Returns Task*
 * 
 * Write a function print_task() that:
 *   - Takes a Task* and prints its description and priority as string
 * 
 * In main():
 *   - Create 3 tasks with different priorities
 *   - Print each task
 *   - Free all tasks
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    // TODO: define LOW, MEDIUM, HIGH, URGENT
} Priority;

typedef struct {
    // TODO: add fields
} Task;

char* priority_to_string(Priority p) {
    // TODO: switch on p, return string
    return NULL;
}

Task* create_task(char* desc, Priority p) {
    // TODO: malloc Task, copy desc, set priority, return
    return NULL;
}

void print_task(Task* t) {
    // TODO: print description and priority as string
}

int main(void) {
    Task* tasks[] = {
        create_task("Fix bug in login", HIGH),
        create_task("Update documentation", LOW),
        create_task("Deploy to production", URGENT)
    };
    int size = sizeof(tasks) / sizeof(tasks[0]);
    
    for (int i = 0; i < size; i++) {
        print_task(tasks[i]);
        free(tasks[i]);
    }
    
    return 0;
}