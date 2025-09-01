#include <stdio.h>

// Calculate length of a string
int mystrlen(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Search for substr in str but only within the first n characters of str
// Returns the index of first occurrence or -1 if not found
int mystrnstr(const char str[], const char substr[], int n) {
    int len_sub = mystrlen(substr);
    int i, j;

    if (len_sub == 0) {
        return 0;  // Empty substring matches at start
    }
    if (len_sub > n) {
        return -1; // substring longer than n, can't be found
    }

    for (i = 0; i <= n - len_sub; i++) {
        if (str[i] == '\0') {
            break;  // Reached end of string before n chars
        }

        for (j = 0; j < len_sub; j++) {
            if (str[i + j] != substr[j] || (i + j) >= n) {
                break;
            }
        }

        if (j == len_sub) {
            return i;  // substring found at index i
        }
    }

    return -1;  // substring not found
}

int main() {
    char text[] = "Hello, OpenAI World!";
    char word[] = "Open";
    int n = 10;

    int pos = mystrnstr(text, word, n);

    if (pos != -1) {
        printf("Substring found at index %d within first %d characters.\n", pos, n);
    } else {
        printf("Substring not found within first %d characters.\n", n);
    }

    return 0;
}
