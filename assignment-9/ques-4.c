/*Write pass-by-value functions to calculate the GCD and LCM of three positive integers*/

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int gcdOfThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int lcmOfThree(int a, int b, int c) {
    return lcm(lcm(a, b), c);
}

int main() {
    int num1, num2, num3;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("GCD of %d, %d, and %d is: %d\n", num1, num2, num3, gcdOfThree(num1, num2, num3));
    printf("LCM of %d, %d, and %d is: %d\n", num1, num2, num3, lcmOfThree(num1, num2, num3));

    return 0;
}