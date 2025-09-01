#include <stdio.h>

void mystrrev(char str[]) {
    int i = 0, j, temp;

    // First, find the length of the string
    while (str[i] != '\0') {
        i++;
    }

    // Now reverse the string
    for (j = 0; j < i / 2; j++) {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
}

int main() {
    char mystring[] = "Hello, World!";

    mystrrev(mystring);

    printf("Reversed string: %s\n", mystring);

    return 0;
}
