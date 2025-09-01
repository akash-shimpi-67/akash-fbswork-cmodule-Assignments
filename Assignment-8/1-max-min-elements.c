#include<stdio.h>
void findmax(int arr[],int n,int *min,int *max)
{

    *min = arr[0];
    *max = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<*min)
            *min=arr[i];
        if(arr[i]>*max)
            *max=arr[i];
    }
}
int main()
{

    int arr[]={2,8,5,1,44};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min,max;

    findmax(arr,n,&min,&max);

    printf("maximum : %d\n",max);
    printf("minimum : %d\n",min);
}
