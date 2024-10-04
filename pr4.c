#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // A year is a leap year if it is divisible by 4,
    // but not by 100 unless it is also divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Return 1 if it is a leap year
    } else {
        return 0; // Return 0 if it is not a leap year
    }
}

int main() {
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
