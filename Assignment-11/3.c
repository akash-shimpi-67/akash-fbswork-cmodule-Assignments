#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i, len;

    // Input string
    printf("Enter a non-empty string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    // Input index to remove
    printf("Enter the index to remove (0 to %d): ", len - 1);
    scanf("%d", &n);

    // Validate index
    if (n < 0 || n >= len) {
        printf("Invalid index.\n");
        return 1;
    }

    // Shift characters left to remove the nth character
    for (i = n; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    str[len - 1] = '\0'; // Null-terminate the string

    // Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
