#include<stdio.h>
int main()
{
int n;
printf("enter array size");
scanf("%d",&n);
int arr[n];
printf("enter array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}}

printf("Sorted Array : \n");
for(int i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
printf("\n");
return 0;
}
