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
printf("even elements is :\n");
for(i=1;i<=n;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
printf("odd elements is : \n");
for(i=0;i<=n;i++)
{

if(i%2!=0)
{
    printf("%d\n",i);
}}

}
