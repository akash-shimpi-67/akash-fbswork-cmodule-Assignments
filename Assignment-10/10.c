#include <stdio.h>

// Convert a character to lowercase (if it's uppercase)
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

// Case-insensitive string comparison
int mystrcasecmp(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = toLower(str1[i]);
        char c2 = toLower(str2[i]);

        if (c1 != c2) {
            return c1 - c2; // Return ASCII difference
        }

        i++;
    }

    // If both strings ended, they are equal. Otherwise, compare last chars
    return toLower(str1[i]) - toLower(str2[i]);
}

int main() {
    char s1[] = "HelloWorld";
    char s2[] = "helloworld";

    int result = mystrcasecmp(s1, s2);

    if (result == 0) {
        printf("Strings are equal (case-insensitive).\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}
