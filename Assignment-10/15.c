#include <stdio.h>

void mystrncat(char dest[], const char src[], int n) {
    int i = 0, j = 0;

    // Find end of dest string
    while (dest[i] != '\0') {
        i++;
    }

    // Append up to n characters from src to dest
    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';  // Null-terminate the result
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "OpenAI!";

    mystrncat(dest, src, 4);  // Append first 4 chars from src

    printf("Result after mystrncat: %s\n", dest);

    return 0;
}
