#include <stdio.h>

int mystrcmp(const char str1[], const char str2[]) {
    int i = 0;
    // Compare characters one by one
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            // Return difference of ASCII values if mismatch
            return (str1[i] - str2[i]);
        }
        i++;
    }
    // If loop ends, check if one string ended earlier than the other
    return (str1[i] - str2[i]);
}

int main() {
    char s1[] = "apple";
    char s2[] = "apples";
    int result = mystrcmp(s1, s2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}
