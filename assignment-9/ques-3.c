/*Using pass-by-value functions, find the sum of digits, count the digits, and reverse an integer. Also determine whether the number is a palindrome.*/

#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1; // Special case for 0
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

int reverseInteger(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int isPalindrome(int num) {
    return num == reverseInteger(num);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Sum of digits: %d\n", sumOfDigits(number));
    printf("Count of digits: %d\n", countDigits(number));
    printf("Reversed integer: %d\n", reverseInteger(number));
    printf("Is palindrome: %s\n", isPalindrome(number) ? "Yes" : "No");

    return 0;
}