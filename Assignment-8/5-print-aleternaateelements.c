#include<stdio.h>
int printalternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
   int n;
   //int arr[n];
   printf("enter array size");
   scanf("%d",&n);
   int arr[n];
   printf("enter arra elements");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printalternate(arr,n);
}
