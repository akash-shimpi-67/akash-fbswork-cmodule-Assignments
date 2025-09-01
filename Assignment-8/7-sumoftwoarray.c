#include<stdio.h>
int sumofarray(int arr[],int brr[],int crr[],int n)
{
    for(int i=0;i<n;i++)
    {

            crr[i]= arr[i]+brr[i];

    }
}

int main()
{

   int n;
   printf("enter size :\n");
   scanf("%d",&n);
int arr[n];
int brr[n];
int crr[n];
   printf("enter elements of first array: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
      printf("enter elements of second array: \n");
       for (int i = 0; i < n; i++){
        scanf("%d", &brr[i]);
       }

sumofarray(arr,brr,crr,n);

printf("sum of arrays \n");
for(int i=0;i<n;i++)
{
    printf("%d\t",crr[i]);
}
printf("\n");
}
