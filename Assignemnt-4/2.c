#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1;  // Assume number is prime

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;  // Not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
