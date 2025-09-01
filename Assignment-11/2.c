#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Replace 'a' with '$'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '$';
        }
    }

    // Print modified string
    printf("Modified string: %s\n", str);

    return 0;
}
