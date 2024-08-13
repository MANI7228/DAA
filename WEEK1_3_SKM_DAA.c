/*Imagine you are working for a large online marketplace like Amazon or eBay. One
of the critical functionalities of such platforms is to display products to customers in
a way that is relevant, helpful, and easy to navigate. Customers can browse through
thousands or even millions of products, and Many users prefer to see products sorted
by price, either in ascending or descending order. This allows them to find the
cheapest or most expensive products within their budget. So, implement an
application to arrange the products based on price*/#include <stdio.h>

#define MAX_SIZE 100  // Maximum number of product prices

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
    int prices[MAX_SIZE];
    int i,size = 0;

    printf("Enter Product Prices (end input with a non-numeric character):\n");

    // Read input product prices
    while (scanf("%d", &prices[size]) == 1) {
        size++;
    }

    // Sort prices in ascending order
    sortAscending(prices, size);

    // Output sorted prices
    printf("Sorted Product Prices:\n");
    for ( i = 0; i < size; i++) {
        printf("%d\n", prices[i]);
    }

    return 0;
}

