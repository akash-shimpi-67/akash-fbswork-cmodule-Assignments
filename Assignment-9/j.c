#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="hello";
char str2[]="firstbit";
if(strcasecmp(str1,str2)==0)
{
printf("strings are equal \n");
}
else
{
printf("strings are not equal\n");
}

}
//strings are not equal
