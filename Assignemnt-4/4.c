#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int digit) {
    int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, num, originalNum, remainder, sum;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Strong numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; num++) {
        originalNum = num;
        sum = 0;

        while (originalNum > 0) {
            remainder = originalNum % 10;
            sum += factorial(remainder);
            originalNum /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
