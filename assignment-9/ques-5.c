/*Write pass-by-value functions to calculate the total and percentage of marks in five subjects, determine the grade, and check whether the student passed every subject. A student fails if the score in any subject is below 40.*/

#include <stdio.h>

int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

float calculatePercentage(int total, int size) {
    return (float)total / size;
}

char determineGrade(float percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 80) return 'B';
    else if (percentage >= 70) return 'C';
    else if (percentage >= 60) return 'D';
    else return 'F';
}

int checkPass(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        if (marks[i] < 40) {
            return 0; // Fail
        }
    }
    return 1; // Pass
}

int main() {
    int marks[5];
    int size = 5;

    printf("Enter marks for five subjects: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &marks[i]);
    }

    int total = calculateTotal(marks, size);
    float percentage = calculatePercentage(total, size);
    char grade = determineGrade(percentage);
    int passStatus = checkPass(marks, size);

    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    printf("Pass Status: %s\n", passStatus ? "Pass" : "Fail");

    return 0;
}