/*
 * EXERCISE 2: Linked pair of structs
 * 
 * Create two structs:
 *   - Person: name (char[50]), age (int)
 *   - Dog: name (char[50]), owner (Person*)
 * 
 * Write a function create_dog() that:
 *   - Takes dog name and owner (Person*)
 *   - Uses malloc to allocate a Dog
 *   - Copies dog name into the struct
 *   - Sets the owner pointer
 *   - Returns Dog*
 * 
 * In main():
 *   - Create a Person on the stack
 *   - Create a Dog with that person as owner
 *   - Print "Dog: [name] belongs to [owner_name]"
 *   - Free only the Dog (the Person is on the stack)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    // TODO: add fields
} Person;

typedef struct {
    // TODO: add fields
} Dog;

Dog* create_dog(char* dogName, Person* owner) {
    // TODO: malloc Dog, copy name, set owner, return
    return NULL;
}

int main(void) {
    Person owner = {"John", 30};
    
    Dog* myDog = create_dog("Rex", &owner);
    
    printf("Dog: %s belongs to %s\n", myDog->name, myDog->owner->name);
    
    free(myDog);
    
    return 0;
}