#include <stdio.h>

// Convert a character to lowercase if uppercase
char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    }
    return ch;
}

// Compare up to n characters of str1 and str2, ignoring case
int mystrncasecmp(const char str1[], const char str2[], int n) {
    int i = 0;

    while (i < n) {
        char c1 = toLower(str1[i]);
        char c2 = toLower(str2[i]);

        if (c1 != c2) {
            return c1 - c2; // Difference in characters
        }

        // If either string ends, stop comparison
        if (str1[i] == '\0' || str2[i] == '\0') {
            break;
        }

        i++;
    }

    return 0; // First n characters are equal (case-insensitive)
}

int main() {
    char s1[] = "OpenAI";
    char s2[] = "openai";

    int result = mystrncasecmp(s1, s2, 6);

    if (result == 0) {
        printf("First 6 characters are equal (case-insensitive).\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2 in first 6 characters.\n");
    } else {
        printf("String 1 is greater than String 2 in first 6 characters.\n");
    }

    return 0;
}
