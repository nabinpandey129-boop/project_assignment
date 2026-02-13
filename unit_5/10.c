// 1. Calculating Factorials
// · Use for loop
// · Explain step-by-step multiplication
#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial using a for loop
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}
