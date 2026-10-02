/*Create a menu-driven program to display an array, insert an element, and delete an element. Use pointer parameters to update the array size and return the deleted value.*/

#include <stdio.h>

void displayArray(int *arr, int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int *arr, int *size, int element, int position) {
    if (position < 0 || position > *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int deleteElement(int *arr, int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position!\n");
        return -1; // Indicate an error
    }
    int deletedValue = arr[position];
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
    return deletedValue;
}

int main() {
    int arr[100], size = 0, choice, element, position, deletedValue;

    do {
        printf("\nMenu:\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert (0 to %d): ", size);
                scanf("%d", &position);
                insertElement(arr, &size, element, position);
                break;
            case 3:
                printf("Enter position to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                deletedValue = deleteElement(arr, &size, position);
                if (deletedValue != -1) {
                    printf("Deleted value: %d\n", deletedValue);
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}