#include<stdio.h>
#include<string.h>
int main()
{
char str[]="welcome to c programming";
char *substr=strstr(str,"c");

if(substr != '\0')
{
printf("found substring %s\n",substr);
}
else{
printf("substring not found");
}
}

