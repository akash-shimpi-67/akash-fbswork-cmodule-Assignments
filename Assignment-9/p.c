#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="helloworld";
char str2[]="hellothere";
if(strncasecmp(str1,str2,5)==0)
{
printf("first five character are equal \n");
}
else{
printf("first 5 character are not equal");
}}

//first five character are equal
