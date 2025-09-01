#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="hello";
char str2[]="everyone";

strncat(str1,str2,4);

printf("concated (first 4) : %s\n",str1);

return 0;
}
//concated (first 4) : helloever
