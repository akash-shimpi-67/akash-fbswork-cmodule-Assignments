//search number in given array
#include<stdio.h>
int main()
{
int n;
int search;
printf("enter array size");
scanf("%d",&n);

int arr[n];
printf("enter aray elements");
for(int i=0;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("array elements is : ");
for(int i=0;i<=n;i++)
{
printf("%d\n",arr[i]);
}
printf("enter elements you want to search");
scanf("%d",&search);
for(int i=0;i<=n;i++)
{
if(arr[i]==search)
{
printf("elements %d found in %d index",search,i);
}
}
}



