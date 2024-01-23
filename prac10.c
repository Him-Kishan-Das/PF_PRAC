#include <stdio.h>

int main() {
 ; 
    int size, element, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

   int array[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }


    printf("Enter the element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < size; ++i) {
        if (array[i] == element) {
            found = 1;
            printf("%d found at index %d.\n", element, i);
            break; 
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", element);
    }

    return 0;
}
