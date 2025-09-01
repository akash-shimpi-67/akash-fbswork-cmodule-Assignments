//write a c program to convert given minutes into hours and reamaininb minutes.
#include<stdio.h>
int main()
{
int total_minutes,hours,minutes;

printf("enter total minutes\n");
scanf("%d",&total_minutes);

hours = total_minutes/60;
minutes = total_minutes%60;

printf("%d minutes is %d hours and %d minute\n",total_minutes,hours,minutes);
}
