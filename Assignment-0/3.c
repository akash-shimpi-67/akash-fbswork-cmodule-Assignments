//Write a C program to convert temperature from celsus to fahrecheit using the forumula
#include<stdio.h>
int main()
{
float c,f;

printf("enter temperature in celcious");
scanf("%f",&c);

f=(c*9.0/5.0)+32;

printf("%.2f celcious = %2.f fahreneit\n",c,f);
return 0;

}
