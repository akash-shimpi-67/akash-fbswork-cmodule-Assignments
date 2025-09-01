#include<stdio.h>
int sumofall(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    printf("sum of all number is %d",sum);
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    int sum=0;
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }



    sumofall(arr,n,sum);
}
