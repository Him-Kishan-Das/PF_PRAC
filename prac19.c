#include <stdio.h>

// Recursive function to calculate the sum of first n natural numbers
int sumOfNaturalNumbers(int n) {
    // Base case
    if (n == 0) {
        return 0;
    } else {
        // Recursive case
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main() {
    int n = 20;

    // Calculate the sum of first 20 natural numbers using the recursive function
    int sum = sumOfNaturalNumbers(n);

    // Display the result
    printf("Sum of the first %d natural numbers: %d\n", n, sum);

    return 0;
}
