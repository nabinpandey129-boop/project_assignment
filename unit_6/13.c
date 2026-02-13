#include <stdio.h>

int main() {
    int n, i;

    // 1. Store n numbers in an array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n]; // Declaring array of size n

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // 2. Find the maximum and minimum
    int max = array[0];
    int min = array[0];

    for(i = 1; i < n; i++) {
        if(array[i] > max) {
            max = array[i];
        }
        if(array[i] < min) {
            min = array[i];
        }
    }

    // 3. Printing Backwards
    printf("\nArray in reverse order: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    // 4. Search for Maximum and Print
    printf("\nLargest is %d\n", max);
    printf("Smallest is %d\n", min);

    return 0;
}