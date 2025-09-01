//print reverse array
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

printf("reverse array is :\n");

for(int i=n1-1;i>=0;i--)
{
printf("%d",arr[i]);
}

}
