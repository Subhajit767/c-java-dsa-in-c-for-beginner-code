#include<stdio.h>
int main()
{
int j,sum,i,n;
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("Perfect no between 1 to %d are:\n",n);
for(i=1;i<=n;i++)
{
    sum=0;
   for(j=1;j<i;j++)
    {
        if(i%j==0)
        sum=sum+j;
    }
    if(sum==i)
    printf(" %d ",i);
}
return 0;
}