//add the first and last digeit of a given number

#include <stdio.h>

int main() {
    int num, choice;
    int firstDigit, lastDigit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Choose:\n1. Add first digit\n2. Add last digit\nEnter choice (1 or 2): ");
    scanf("%d", &choice);

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    if (choice == 1) {
        printf("First digit of %d is %d\n", num, firstDigit);
    } else if (choice == 2) {
        printf("Last digit of %d is %d\n", num, lastDigit);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
