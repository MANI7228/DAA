/*Imagine you are working for a retail store that sells a wide variety of products. The
store has a vast inventory with thousands of items, and it's becoming challenging for
the employees to manage and locate products efficiently. Customers often ask for
specific items, and employees need to find them quickly. The sorting program's
primary goal is to organize the products in the inventory systematically, allowing for
faster and easier access to items when needed.
Implement an efficient sorting algorithm to arrange the products based on product
IDs*/
#include <stdio.h>

#define MAX_SIZE 100  // Maximum number of times

void sortAscending(int arr[], int size) {
    int i,j,temp;
    for ( i = 0; i < size - 1; i++) {
        for ( j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int times[MAX_SIZE];
    int i,size = 0;

    printf("Enter time to reach destination (end input with a non-numeric character):\n");

    // Read input times
    while (scanf("%d", &times[size]) == 1) {
        size++;
    }

    // Sort times in ascending order
    sortAscending(times, size);

    // Output sorted times
    printf("Sorted Times:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", times[i]);
    }

    return 0;
}

