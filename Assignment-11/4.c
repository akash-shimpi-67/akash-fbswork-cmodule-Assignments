#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if any
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    if (len > 1) {
        // Swap first and last characters
        char temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("Modified string: %s\n", str);

    return 0;
}
