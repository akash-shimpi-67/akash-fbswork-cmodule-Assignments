#include <stdio.h>

// Returns the index of the last occurrence of character 'ch' in 'str'
// Returns -1 if not found
int mystrrchr(const char str[], char ch) {
    int i = 0;
    int lastIndex = -1;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            lastIndex = i; // Update last found index
        }
        i++;
    }

    return lastIndex;
}

int main() {
    char mystring[] = "Hello, World!";
    char target = 'o';

    int index = mystrrchr(mystring, target);

    if (index != -1) {
        printf("Last occurrence of '%c' is at index: %d\n", target, index);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
