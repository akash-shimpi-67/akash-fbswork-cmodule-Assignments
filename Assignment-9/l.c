#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hello";
char* ptr = strchr(str,'l');

printf("last l at %s\n",ptr);
return 0;
}
