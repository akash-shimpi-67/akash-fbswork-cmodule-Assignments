//print alternate elements is
#include<stdio.h>
int main()
{

int n;

printf("enter array size\n");
scanf("%d\n",&n);

int arr[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);

}
printf("alternate elements is  : \n");
for(int i=0;i<n;i+=2)
{
    printf("%d\n",arr[i]);
}
}
