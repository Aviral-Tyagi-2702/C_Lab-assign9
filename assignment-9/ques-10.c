/*Write functions to sort an integer array in ascending and descending order by passing the array through pointers. Modify the original array without using a predefined sorting function or another array*/

#include <stdio.h>

void sortAscending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void sortDescending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) < *(arr + j + 1)) {
                // Swap elements
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[100], size, choice;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sortAscending(arr, size);
        printf("Array sorted in ascending order:\n");
    } else if (choice == 2) {
        sortDescending(arr, size);
        printf("Array sorted in descending order:\n");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}