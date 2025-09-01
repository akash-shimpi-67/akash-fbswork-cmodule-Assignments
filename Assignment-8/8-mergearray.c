
#include<stdio.h>
int mergeofarray(int arr[],int brr[],int crr[],int n,int n2)
{
    for(int i=0;i<n;i++)
    {

            crr[i]= arr[i];

    }
    for(int i=0;i<n2;i++)
    {
        crr[n+i]=brr[i];
    }
}

int main()
{

   int n,n2;
   printf("enter size first array :\n");
   scanf("%d",&n);
int arr[n];
int brr[n];

   printf("enter elements of first array: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter second array size");
    scanf("%d",&n2);
    printf("enter second array elements");
      printf("enter elements of second array: \n");
       for (int i = 0; i < n2; i++){
        scanf("%d", &brr[i]);
       }

       int crr[n+n2];

mergeofarray(arr,brr,crr,n,n2);

printf("after merge of arrays \n");
for(int i=0;i<n+n2;i++)
{
    printf("%d\t",crr[i]);
}
printf("\n");
}
