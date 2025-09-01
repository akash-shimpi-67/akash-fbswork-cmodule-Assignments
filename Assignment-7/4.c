//find even and odd among the numbers;
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
printf("even number is : \n");

for(int i=0;i<n;i++)
{
if(arr[i]%2==0)
{
printf("%d\n",arr[i]);
}}

printf("odd number is : \n");

for(int i=0;i<n;i++)
{
if(arr[i]%2!=0)
{
printf("%d\n",arr[i]);
}}}
