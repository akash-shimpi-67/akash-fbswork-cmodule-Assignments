//check number is strong or not
#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;

        // Calculate factorial of the digit
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong Number.\n", originalNum);
    else
        printf("%d is not a Strong Number.\n", originalNum);

    return 0;
}
