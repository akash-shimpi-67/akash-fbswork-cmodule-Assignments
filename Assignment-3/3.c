//calculate sum of given range
#include<stdio.h>
int main()
{
    int sum=0;
int n;
printf("enter a  number to you want");
scanf("%d",&n);
for(int i=0;i<=n;i++)
{
 sum=sum+i;
}
printf("sum of given range is : %d\n",sum);

}
