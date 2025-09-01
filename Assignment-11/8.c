#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, count = 0;
    int inWord = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Count words by detecting transitions from whitespace to non-whitespace
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && !inWord) {
            // Start of a new word
            inWord = 1;
            count++;
        } else if (isspace(str[i])) {
            inWord = 0;
        }
    }

    printf("Number of words: %d\n", count);

    return 0;
}
