#include<stdio.h>
#include<string.h>
int main()
{ char str[] = "hello world";
    char *ptr = strchr(str, 'o');

    if (ptr != NULL) {
        printf("First occurrence of 'o': %s\n", ptr);
    } else {
        printf("Character not found.\n");
    }

    return 0;

}
//First occurrence of 'o': o world
