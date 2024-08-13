/*In an online bookstore, there are thousands of books available for purchase. The
bookstore's website allows customers to search for books based on various criteria,
such as title, author, publication date, and price. if a customer searches for books by
a specific title and price, the program can arrange the search results by price, from
low to high or vice versa, based on the customer's preference*/
#include <stdio.h>

#define MAX_SIZE 100  // Maximum number of prices

void sortDescending(int arr[], int size) {
    int i,j,temp;
    for ( i = 0; i < size - 1; i++) {
        for ( j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int prices[MAX_SIZE];
    int i,size = 0;

    printf("Enter Book Prices (end input with a non-numeric character):\n");

    // Read input prices
    while (scanf("%d", &prices[size]) == 1) {
        size++;
    }

    // Sort prices in descending order
    sortDescending(prices, size);

    // Output sorted prices
    printf("Sorted Book Prices:\n");
    for ( i = 0; i < size; i++) {
        printf("%d\n", prices[i]);
    }

    return 0;
}

