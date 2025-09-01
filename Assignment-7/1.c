//find minimum and maximum number in the array

#include<stdio.h>
int main()
{

    int arr[10];
    printf("enter array elements\n");
    for(int i=0;i<=10;i++)
    {
        scanf("%d\n",&arr[i]);

    }
    int min=arr[0];
    int max=arr[0];
     printf(" array elements are : \n");
    for(int i=0;i<=10;i++)
    {
        printf("%d\n",arr[i]);

    }
    for(int i=0;i<=10;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("minimum number is %d\n",min);
    printf("maximum number is %d\n",max);
}
