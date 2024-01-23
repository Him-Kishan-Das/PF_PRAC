#include <stdio.h>

void deleteElement(int arr[], int size, int indexToDelete) {
    // Check if the index is valid
    if (indexToDelete < 0 || indexToDelete >= size) {
        printf("Invalid index. Deletion failed.\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = indexToDelete; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;

    // Print the updated array
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original Array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    int indexToDelete = 2;  // specify the index to delete
    deleteElement(myArray, arraySize, indexToDelete);

    return 0;
}