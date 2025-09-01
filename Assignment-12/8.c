#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, i, j;
    int *arr1, *arr2, *merged;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Allocate memory and input elements for first array
    arr1 = (int *)malloc(n1 * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Allocate memory and input elements for second array
    arr2 = (int *)malloc(n2 * sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed.\n");
        free(arr1);
        return 1;
    }
    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Allocate memory for merged array
    merged = (int *)malloc((n1 + n2) * sizeof(int));
    if (merged == NULL) {
        printf("Memory allocation failed.\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    // Copy elements from arr1 to merged
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2 to merged
    for (j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Print merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Free memory
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
