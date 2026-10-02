/*Write a function using pointers to cyclically interchange three values as follows: a <- b, b <- c, c <- a. Display the values before and after swapping.*/

#include <stdio.h>

void cyclicInterchange(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main() {
    int a, b, c;

    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping: a = %d, b = %d, c = %d\n", a, b, c);

    cyclicInterchange(&a, &b, &c);

    printf("After swapping: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}