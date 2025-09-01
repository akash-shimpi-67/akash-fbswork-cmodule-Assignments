#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Remove odd index characters by shifting even index chars forward
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the string

    // Print modified string
    printf("String after removing characters at odd indices: %s\n", str);

    return 0;
}
