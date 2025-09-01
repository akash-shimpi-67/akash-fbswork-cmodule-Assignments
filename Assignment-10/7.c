#include <stdio.h>

void mystrlower(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
        i++;
    }
}

int main() {
    char mystring[] = "HeLLo, WORld!";

    mystrlower(mystring);

    printf("Lowercase string: %s\n", mystring);

    return 0;
}
