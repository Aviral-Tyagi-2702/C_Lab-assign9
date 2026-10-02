#include <stdio.h>

int add(int a, int b) {
  printf("sum is %d\n", a + b);
}

int subtract(int a, int b){
  printf("differenece is %d\n", a - b);
}

int multiply(int a, int b){
  printf("product is %d\n", a * b);
}

int divide(int a, int b) {
  if (b == 0) {
    printf("Error: Division by zero is not allowed.\n");
    return 0;
  } else {
    printf("quotient is %d\n", a / b);
  }
}

int modulus(int a, int b) {
  if (b == 0) {
    printf("Error: Modulus by zero is not allowed.\n");
    return 0;
  } else {
    printf("modulus is %d\n", a % b);
  }
}

int main() {
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("the sum is %d\n", add(a, b));
  printf("the difference is %d\n", subtract(a, b));
  printf("the product is %d\n", multiply(a, b));
  printf("the quotient is %d\n", divide(a, b));
  printf("the modulus is %d\n", modulus(a, b));
  return 0;
}