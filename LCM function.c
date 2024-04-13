#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) using Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the Least Common Multiple (LCM) of two numbers
int findLCM(int num1, int num2) {
    // LCM * GCD = |num1 * num2|
    // Using this property to find LCM
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the findLCM function
    int lcm = findLCM(num1, num2);

    // Display the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
