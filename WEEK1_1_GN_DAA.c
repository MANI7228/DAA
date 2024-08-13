/*Imagine you work for a large logistics company that handles a high volume of
package deliveries on a daily basis. The company's success hinges on ensuring that
packages are delivered to their respective destinations efficiently and on time. To
solve this problem, you create a program that can quickly process and classify
packages based on their destination*/
#include <stdio.h>

#define MAX_SIZE 100  // Maximum number of elements

void sort(int arr[], int size) {
    int temp;
    int i;
    int j;
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
    int times[MAX_SIZE];
    int size = 0;
    int i;
    printf("Enter time to reach destination (end input with a non-numeric character):\n");

    // Reading user input
    while (scanf("%d", &times[size]) == 1) {
        size++;
    }
    
    // Sorting the array
    sort(times, size);

    // Output the sorted times
    printf("Sorted times:\n");
    for ( i = 0; i < size; i++) {
        printf("%d\n", times[i]);
    }

    return 0;
}

