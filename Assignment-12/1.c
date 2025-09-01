#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i;
int *arr;
int max,min;

printf("enter the number of elements");
scanf("%d",&n);

arr=(int *)malloc(n* sizeof(int));

printf("enter %d integers",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
//max=min=arr[i];

for(i=1;i<n;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}}
printf("maximum elements is %d",max);
printf("minimum elemnts is %d",min);

free(arr);
return 0;
}
