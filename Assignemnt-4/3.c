#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Perfect numbers between 1 and %d are:\n", n);

    // Loop through all numbers from 1 to n
    for (i = 1; i <= n; i++) {
        sum = 0;

        // Find divisors of i and sum them (excluding i)
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        // Check if sum of divisors equals the number
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
