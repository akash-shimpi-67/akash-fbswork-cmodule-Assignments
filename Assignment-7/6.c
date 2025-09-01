//sum of two array
#include<stdio.h>
int main()
{
int n;
printf("enter array size");
scanf("%d",&n);
int arr[n];
printf("enter first array elements");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int brr[n];
printf("enter second array elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&brr[i]);
}
int crr[n];
for(int i=0;i<n;i++)
{
crr[i]=arr[i]+brr[i];

}

printf("sum of two array is : \n");
for(int i=0;i<n;i++)
{
printf("%d\n",crr[i]);
}
}
