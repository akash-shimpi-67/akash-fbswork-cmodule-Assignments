#include<stdio.h>
#include<string.h>
int main()
{
char str1[]="helloworld";
char str2[]="hellothere";

int result = strncmp(str1,str2,5);
if(result==0)
{
    printf("First 5 characters are equal \n");

}
else if(result<0)
{
    printf("str1 is less than str2 \n");
}
else {
    printf("str1 is greater than str2 \n");

}
}
//First 5 characters are equal
