#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, len1 = 0, len2 = 0;

    // Input first string
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline from fgets
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    // Input second string
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from fgets
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    // Calculate length of first string manually
    for (i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    // Calculate length of second string manually
    for (i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    // Compare lengths and display the larger string
    if (len1 > len2) {
        printf("Larger string: %s\n", str1);
    } else if (len2 > len1) {
        printf("Larger string: %s\n", str2);
    } else {
        printf("Both strings have equal length:\n%s\n%s\n", str1, str2);
    }

    return 0;
}
