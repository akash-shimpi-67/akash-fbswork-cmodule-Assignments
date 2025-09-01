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
printf("alternate elements is : \n");

for(i=0;i<n;i+=2)
{
printf("%d\n",arr[i]);

}}
