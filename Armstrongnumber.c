#include<stdio.h>
#include<math.h>
int main()
{
int n,i,count,b,c,a,sum,d;
printf("Enter the upper limit:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    b=i;
    count=0;
    while (b>0)
    {
       b/=10;
       count++;
    }
    a=i;
    sum=0;
    while(a>0)
    {
        c=a%10;
        sum=sum+pow(c,count);
        a/=10;
    }
    if(sum==i)
    printf(" %d ",i);
}
return 0;
}