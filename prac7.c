#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Please enter a valid four-digit number.\n");
        return 1; 
    }

    firstDigit = number / 1000;
    lastDigit = number % 10;
    int sum = firstDigit + lastDigit;
    printf("The sum of the first and last digits of %d is: %d\n", number, sum);

    return 0;
}
