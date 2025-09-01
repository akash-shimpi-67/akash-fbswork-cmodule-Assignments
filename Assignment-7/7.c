//merge two arrays
#include<stdio.h>
int main()

{

int n1;
printf("enter array size");
scanf("%d",&n1);
int arr[n1];
printf("enter first array elements");
for(int i=0;i<n1;i++)
{
scanf("%d",&arr[i]);
}
int n2;
printf("enter second array size");
scanf("%d",&n2);

int brr[n2];
printf("enter second array elements\n");
for(int i=0;i<n2;i++)
{
scanf("%d",&brr[i]);
}

int merged[n1 + n2];

    // Copy elements of arr1 to merged
    for (int i = 0; i < n1; i++) {
        merged[i] = arr[i];
    }

    // Copy elements of arr2 to merged
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = brr[i];
    }

    // Print merged array
    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

