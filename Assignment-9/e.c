#include<stdio.h>
int main()
{
char str[]="akash";
char dest[20];
strncpy(dest,str,3);

dest[3]='\0';

printf("copied ( first 3 ) %s\n",dest);
return 0;



}
//copied ( first 3 ) aka
