
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr1, *arr2, *sum;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for all three arrays
    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    sum  = (int *)malloc(n * sizeof(int));

    // Check memory allocation
    if (arr1 == NULL || arr2 == NULL || sum == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input elements for first array
    printf("Enter elements for first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements for second array
    printf("Enter elements for second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compute sum
    for (i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Print the result
    printf("Sum of the two arrays is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(sum);

    return 0;
}

