#include <stdio.h>

void mystrncpy(char dest[], const char src[], int n) {
    int i;

    // Copy characters from src to dest until n or end of src
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // If src is shorter than n, pad the rest with '\0'
    for (; i < n; i++) {
        dest[i] = '\0';
    }
}

int main() {
    char source[] = "OpenAI";
    char destination[20];

    mystrncpy(destination, source, 4);  // Copy only first 4 characters

    destination[4] = '\0'; // Ensure null-termination if printing as a string
    printf("Copied string (up to n chars): %s\n", destination);

    return 0;
}
