#include <stdio.h>
#include <math.h>

int main() {
    int n, num, originalNum, remainder, result, digits, i;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    for (num = 1; num <= n; num++) {
        originalNum = num;
        digits = 0;
        result = 0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        // Calculate sum of digits raised to the power 'digits'
        while (originalNum != 0) {
            remainder = originalNum % 10;

            // Calculate power using loop (instead of pow function)
            int power = 1;
            for (i = 1; i <= digits; i++) {
                power *= remainder;
            }

            result += power;
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
