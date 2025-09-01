#include <stdio.h>

int mystrlen(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Returns the index of the first occurrence of substr in str,
// or -1 if not found
int mystrstr(const char str[], const char substr[]) {
    int i, j;
    int len_str = mystrlen(str);
    int len_sub = mystrlen(substr);

    if (len_sub == 0) {
        return 0; // Empty substring is always found at index 0
    }

    for (i = 0; i <= len_str - len_sub; i++) {
        for (j = 0; j < len_sub; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == len_sub) {
            return i; // Match found at index i
        }
    }

    return -1; // No match found
}

int main() {
    char text[] = "Hello, OpenAI World!";
    char word[] = "OpenAI";

    int pos = mystrstr(text, word);

    if (pos != -1) {
        printf("Substring found at index: %d\n", pos);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
