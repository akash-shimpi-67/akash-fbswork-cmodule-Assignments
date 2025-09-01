#include <stdio.h>

void mystrcpy(char dest[], const char src[]) {
    int i = 0;
    // Copy characters one by one until null terminator is found
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[50];

    mystrcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
