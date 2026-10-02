/*Write pass-by-value functions to check whether a number is even or odd, positive, negative or zero, prime, and perfect. Display a complete classification report.*/

#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0;
}

int isOdd(int num) {
    return num % 2 != 0;
}

int isPositive(int num) {
    return num > 0;
}

int isNegative(int num) {
    return num < 0;
}

int isZero(int num) {
    return num == 0;
}

int isPrime(int num) {
  if (num <= 1) return 0;
  for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) return 0;
  }
  return 1;
}

int isPerfect(int num) {
    if (num <= 0) return 0;
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Classification Report for %d:\n", number);
    printf("Even: %s\n", isEven(number) ? "Yes" : "No");
    printf("Odd: %s\n", isOdd(number) ? "Yes" : "No");
    printf("Positive: %s\n", isPositive(number) ? "Yes" : "No");
    printf("Negative: %s\n", isNegative(number) ? "Yes" : "No");
    printf("Zero: %s\n", isZero(number) ? "Yes" : "No");
    printf("Prime: %s\n", isPrime(number) ? "Yes" : "No");
    printf("Perfect: %s\n", isPerfect(number) ? "Yes" : "No");

    return 0;
}