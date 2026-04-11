/*
 * EXERCISE 2: Warehouse Inventory
 * 
 * Create an enum Category with: ELECTRONICS, FURNITURE, CLOTHING, FOOD
 * 
 * Create a struct Item with:
 *   - name (char[50])
 *   - category (Category)
 *   - quantity (int)
 *   - price (double)
 * 
 * Write functions:
 *   - create_item(name, category, quantity, price) -> Item* (malloc)
 *   - print_item(Item*)
 *   - total_value(Item* array[], int count) -> double
 *   - count_by_category(Item* array[], int count, Category) -> int
 *   - free_inventory(Item* array[], int count)
 * 
 * In main():
 *   - Create dynamic array of 5 items
 *   - Mix categories and values
 *   - Print all items
 *   - Print total inventory value
 *   - Count items in each category
 *   - Free everything
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    // TODO: define ELECTRONICS, FURNITURE, CLOTHING, FOOD
} Category;

typedef struct {
    // TODO: add fields
} Item;

char* category_to_string(Category c) {
    // TODO: switch on c, return string
    return NULL;
}

Item* create_item(char* name, Category cat, int qty, double price) {
    // TODO: malloc Item, copy fields, return
    return NULL;
}

void print_item(Item* i) {
    // TODO: print item info
}

double total_value(Item* items[], int count) {
    // TODO: sum (quantity * price) for all items
    return 0.0;
}

int count_by_category(Item* items[], int count, Category cat) {
    // TODO: count items matching category
    return 0;
}

void free_inventory(Item* items[], int count) {
    // TODO: free each item, then free the array
}

int main(void) {
    Item** inventory = malloc(sizeof(Item*) * 5);
    inventory[0] = create_item("Laptop", ELECTRONICS, 10, 999.99);
    inventory[1] = create_item("Chair", FURNITURE, 25, 149.99);
    inventory[2] = create_item("T-Shirt", CLOTHING, 100, 19.99);
    inventory[3] = create_item("Apple", FOOD, 500, 0.50);
    inventory[4] = create_item("Smartphone", ELECTRONICS, 15, 699.99);
    
    printf("=== Inventory ===\n");
    for (int i = 0; i < 5; i++) {
        print_item(inventory[i]);
    }
    
    printf("\nTotal value: $%.2f\n", total_value(inventory, 5));
    
    printf("\nBy category:\n");
    Category cats[] = {ELECTRONICS, FURNITURE, CLOTHING, FOOD};
    for (int i = 0; i < 4; i++) {
        printf("  %s: %d\n", category_to_string(cats[i]), 
               count_by_category(inventory, 5, cats[i]));
    }
    
    free_inventory(inventory, 5);
    
    return 0;
}