/*Imagine you're working for a large online marketplace company that facilitates the
buying and selling of various products. As part of the order processing system, the
company receives thousands of new orders every minute from customers all around
the world. To ensure efficient and timely order fulfillment, the orders need to be
sorted based on various criteria before they can be processed and shipped.
Some customers may request advanced shipping or have urgent requirements.
So, implement an application to arrange the Orders based on priority Number*/
#include <stdio.h>

#define MAX_SIZE 100  // Maximum number of elements

void sort(int arr[], int size) {
    int temp,i,j;
    for (i = 0; i < size - 1; i++) {
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
    int order_priorities[MAX_SIZE];
    int i,size = 0;
    printf("Enter Orders Priority Number (end input with a non-numeric character):\n");

    // Reading user input
    while (scanf("%d", &order_priorities[size]) == 1) {
        size++;
    }
    
    // Sorting the array
    sort(order_priorities, size);

    // Output the sorted order priorities
    printf("Sorted Orders Priority:\n");
    for ( i = 0; i < size; i++) {
        if (i > 0) printf(", ");
        printf("%d", order_priorities[i]);
    }
    printf("\n");

    return 0;
}

