/*Without sorting, write a function using pointer parameters to find the smallest, second-smallest, greatest, and second-greatest distinct elements of an array. Display an appropriate message if fewer than two distinct values exist*/

#include <stdio.h>

void findDistinctElements(int *arr, int size, int *smallest, int *secondSmallest, int *greatest, int *secondGreatest) {
    *smallest = *greatest = arr[0];
    *secondSmallest = *secondGreatest = -1; // Initialize to -1 to indicate not found

    for (int i = 1; i < size; i++) {
        if (arr[i] < *smallest) {
            *secondSmallest = *smallest;
            *smallest = arr[i];
        } else if (arr[i] > *smallest && (arr[i] < *secondSmallest || *secondSmallest == -1)) {
            *secondSmallest = arr[i];
        }

        if (arr[i] > *greatest) {
            *secondGreatest = *greatest;
            *greatest = arr[i];
        } else if (arr[i] < *greatest && (arr[i] > *secondGreatest || *secondGreatest == -1)) {
            *secondGreatest = arr[i];
        }
    }
}


int main() {
    int arr[100], size, smallest, secondSmallest, greatest, secondGreatest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findDistinctElements(arr, size, &smallest, &secondSmallest, &greatest, &secondGreatest);

    if (secondSmallest == -1) {
        printf("Fewer than two distinct values exist for smallest elements.\n");
    } else {
        printf("Smallest: %d\n", smallest);
        printf("Second Smallest: %d\n", secondSmallest);
    }

    if (secondGreatest == -1) {
        printf("Fewer than two distinct values exist for greatest elements.\n");
    } else {
        printf("Greatest: %d\n", greatest);
        printf("Second Greatest: %d\n", secondGreatest);
    }

    return 0;
}

