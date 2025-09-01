#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,j,isprime;

int *arr;

printf("enter array size");
scanf("%d",&n);

arr=(int *)malloc(n* sizeof(int));
printf("enter array elemtnts");
for( i=0;i<n;i++)

{
scanf("%d",&arr[i]);
}
printf("prime ;number in the array");
for(i=0;i<n;i++)
{


    if(arr[i]<=1)
    {
        continue;
    }
    isprime=1;

    for(j=2;j*j<=arr[i];j++)
    {
        if(arr[i]%j==0)
        {

            isprime=0;
            break;
        }
    }
    if(isprime)
    {
        printf("%d",arr[i]);
    }
}
free(arr);

return 0;

}
