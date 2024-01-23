#include <stdio.h>

int main() {
    int array[50];
    int size, sum = 0, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) {
            sum += array[i];
            count++;
        }
    }

    float average = (count > 0) ? sum / (float)count : 0.0;

    printf("Sum of even numbers: %d\n", sum);
    printf("Average of even numbers: %.2f\n", average);

    return 0;
}
