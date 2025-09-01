//write a c program to input five number and find ttheir average.

#include <stdio.h>

int main() {
    float num1=1, num2=2, num3=3, num4=4, num5=5, average;


    average = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("The average is: %.2f\n", average);

    return 0;
}
