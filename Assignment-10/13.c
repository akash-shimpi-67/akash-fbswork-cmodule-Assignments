#include <stdio.h>

// Compare up to n characters of str1 and str2
int mystrncmp(const char str1[], const char str2[], int n) {
    int i = 0;

    while (i < n) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Return difference if characters differ
        }

        // If either string ends, stop comparing
        if (str1[i] == '\0' || str2[i] == '\0') {
            break;
        }

        i++;
    }

    return 0; // First n characters are equal
}

int main() {
    char s1[] = "OpenAI";
    char s2[] = "Open";

    int result = mystrncmp(s1, s2, 4);

    if (result == 0) {
        printf("First 4 characters are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2 in the first 4 characters.\n");
    } else {
        printf("String 1 is greater than String 2 in the first 4 characters.\n");
    }

    return 0;
}
