#include <stdio.h>

int mystrlen(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char mystring[] = "Hello, World!";
    int len = mystrlen(mystring);
    printf("Length of the string: %d\n", len);
    return 0;
}
