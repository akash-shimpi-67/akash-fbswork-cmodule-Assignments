//Write a c program and swap two numbers using third variable.
#include<stdio.h>
int main()
{
int a,b,c;
a=10;
b=20;

printf(" a = %d \n b = %d \n",a,b);

c=a;
a=b;
b=c;

printf("after swapping variable\n");

printf("\na = %d\n",a);
printf("\nb = %d",b);
}
