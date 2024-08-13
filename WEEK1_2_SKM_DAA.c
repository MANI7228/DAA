
/*Courier and logistics companies handle a massive volume of packages daily. These
packages need to be efficiently sorted and routed to their destinations to ensure
timely and accurate deliveries. Each package typically has a unique barcode that
contains essential information like the recipient's address, delivery method, and
tracking number. So, implement an application to arrange the packages based on
tracking numbers
*/#include <stdio.h>

#define MAX_SIZE 100  // Maximum number of tracking numbers

void sortDescending(int arr[], int size) {
    int i,j,temp;
    for ( i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
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
    int tracking_numbers[MAX_SIZE];
    int i,size = 0;

    printf("Enter Package Tracking Numbers (end input with a non-numeric character):\n");

    // Read input tracking numbers
    while (scanf("%d", &tracking_numbers[size]) == 1) {
        size++;
    }

    // Sort tracking numbers in descending order
    sortDescending(tracking_numbers, size);

    // Output sorted tracking numbers
    printf("Sorted Package Tracking Numbers:\n");
    for ( i = 0; i < size; i++) {
        printf("%d\n", tracking_numbers[i]);
    }

    return 0;
}

