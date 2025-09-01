//write a c program to input marks of five subjects find the total marks, and calculate the percentage

#include<stdio.h>
int main()
{

   int marks1=90;
   int marks2=88;
   int marks3=98;
   int marks4=85;
   int marks5=91;


   int total_marks = marks1+marks2+marks3+marks4+marks5;

   printf("total marks is : %d\n",total_marks);

    int percentages = total_marks/5;

    printf("total percentages is : %d",percentages);

}
