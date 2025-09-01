#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets (if present)
    str[strcspn(str, "\n")] = '\0';

    // Input character to search
    printf("Enter a character to search: ");
    scanf("%c", &ch);

    // Search character in string
    printf("Character '%c' found at positions: ", ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("%d ", i);  // print index
            found = 1;
        }
    }

    if (!found) {
        printf("Not found.");
    }

    printf("\n");
    return 0;
}
