#include <stdio.h>

void mystrcat(char dest[], const char src[]) {
    int i = 0, j = 0;

    // Find the end of dest string
    while (dest[i] != '\0') {
        i++;
    }

    // Append src to dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; // Null-terminate the concatenated string
}

int main() {
    char destination[100] = "Hello, ";
    char source[] = "World!";

    mystrcat(destination, source);

    printf("Concatenated string: %s\n", destination);

    return 0;
}
