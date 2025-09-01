#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,sum=0;

int *arr;

printf("enter array size");
scanf("%d",&n);

arr=(int *)malloc(n* sizeof(int));
printf("enter array elemtnts");
for( i=0;i<n;i++)

{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
sum=sum+arr[i];
}
printf("sum of all elements is : %d\n",sum);
}
