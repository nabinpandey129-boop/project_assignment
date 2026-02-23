#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) 
    return 0;  
    if (n == 1) 
    return 1; 
    else
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n;

    printf("Enter position of the number:");
    scanf("%d", &n);

    int result = fibonacci(n); 
    printf("Fibonacci number at position %d is %d\n", n, result);

    return 0;
}