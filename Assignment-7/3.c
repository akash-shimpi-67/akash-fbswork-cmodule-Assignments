#include<stdio.h>
int main()
{
//find sum of all nubmers
int n;
int sum=0;
printf("enter array size\n");
scanf("%d",&n);

int arr[n];
printf("enter array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
sum = sum + arr[i];
}
printf("sum of all number is %d\n",sum);

}
