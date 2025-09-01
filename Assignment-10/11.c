#include <stdio.h>

// Returns the index of the first occurrence of character 'ch' in 'str'
// Returns -1 if not found
int mystrchr(const char str[], char ch) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            return i;  // Found character at index i
        }
        i++;
    }

    return -1;  // Character not found
}

int main() {
    char mystring[] = "Hello, World!";
    char target = 'o';

    int index = mystrchr(mystring, target);

    if (index != -1) {
        printf("Character '%c' found at index: %d\n", target, index);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}
