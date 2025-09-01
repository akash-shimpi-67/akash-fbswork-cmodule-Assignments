#include<stdio.h>
int main()
{

char str[10] = "hello";

strrev(str);

printf("reverse string is : %s",str);//olleh

printf("%d\n",strrev(str));

char org[10];
strcpy(org,str);
strrev(str);

int x = strcmp(org,str);
if(x==0)
    return 1;
else
    return -1;

}
