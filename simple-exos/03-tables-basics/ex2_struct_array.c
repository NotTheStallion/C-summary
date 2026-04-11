/*
 * EXERCISE 2: Array of structs - find book with highest year
 * 
 * Create a struct Book with fields:
 *   - title (char[50])
 *   - year (int)
 * 
 * Write a function find_newest() that:
 *   - Takes an array of Book and its size
 *   - Returns the index of the newest book (highest year)
 * 
 * In main():
 *   - Create an array of 4 books with different years
 *   - Find and print the newest book
 */

#include <stdio.h>

typedef struct {
    // TODO: add fields
} Book;

int find_newest(Book books[], int size) {
    // TODO: loop through and return index of highest year
    return 0;
}

int main(void) {
    Book books[] = {
        {"The Great Gatsby", 1925},
        {"1984", 1949},
        {"To Kill a Mockingbird", 1960},
        {"The Catcher in the Rye", 1951}
    };
    int size = sizeof(books) / sizeof(books[0]);
    
    int idx = find_newest(books, size);
    printf("Newest book: %s (%d)\n", books[idx].title, books[idx].year);
    
    return 0;
}