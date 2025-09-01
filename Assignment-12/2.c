#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,key,index=0;

int *arr;

printf("enter array size");
scanf("%d",&n);

arr=(int *)malloc(n* sizeof(int));
printf("enter array elemtnts");
for( i=0;i<n;i++)

{
scanf("%d",&arr[i]);
}
printf("enter elements you want to found");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(arr[i]==key)
{
printf("element %d found at %d index",key,i);
}
}
}
