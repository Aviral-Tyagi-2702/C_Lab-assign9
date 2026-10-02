/*Without using functions from string.h, write a function that returns through pointer parameters the numbers of vowels, consonants, digits, spaces, and special characters in a string. Treat uppercase and lowercase letters identically.*/

#include <stdio.h>

void analyzeString(const char *str, int *vowels, int *consonants, int *digits, int *spaces, int *specialChars) {
    *vowels = *consonants = *digits = *spaces = *specialChars = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Check for vowels
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if (ch == ' ') {
            (*spaces)++;
        } else {
            (*specialChars)++;
        }
    }
}

int main() {
    char str[100];
    int vowels, consonants, digits, spaces, specialChars;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyzeString(str, &vowels, &consonants, &digits, &spaces, &specialChars);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}