#include <stdio.h>

int searchNumber(int arr[], int n, int key)
 {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter number to search: ");
    scanf("%d", &key);

    int index = searchNumber(arr, n, key);

    if (index != -1)
        printf("Number %d found at index %d.\n", key, index);
    else
        printf("Number %d not found in the array.\n", key);

    return 0;
}
