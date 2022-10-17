#include<stdio.h>
int factorial(int r)
{
    if(r==1)
    return 1;
    else
    return (r*factorial(r-1));
}
int main()
{
int j,fact,n,i,sum,a,b,r;
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("Strong number between 1 to %d are:\n",n);
for(i=1;i<=n;i++)
{
    sum=0;
    b=i;
    a=b;
    while(b>0)
    {
        fact=1;
        r=b%10;
        for(j=1;j<=r;j++)
        fact=fact*j;
        sum=sum+fact;
        b/=10;
    }
    if(sum==a)
    printf(" %d ",a);
}
return 0;
}