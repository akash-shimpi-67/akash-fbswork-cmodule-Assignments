#include <stdio.h>

void mystrupper(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        // Check if the character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++;
    }
}

int main() {
    char mystring[] = "Hello, World!";

    mystrupper(mystring);

    printf("Uppercase string: %s\n", mystring);

    return 0;
}
