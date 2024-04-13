#include <stdio.h>

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Call the generateFibonacci function
    generateFibonacci(n);

    return 0;
}
