/*#include<stdio.h>
int fibonacci(int i)
{
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return (fibonacci(i-1)+fibonacci(i-2));
}
int main()
{
int i,n;
printf("Enter the number of terms:\n");
scanf("%d",&n);
printf("Fibonacci series is :\n");
for(i=0;i<n;i++)
printf(" %d ",fibonacci(i));
return 0;
}*/
#include<stdio.h>
int main()
{
int n3,n,i,n1=0,n2=1;
printf("Enter the number of terms:\n");
scanf("%d",&n);
printf("Fibonacci series are 0 1");
for(i=0;i<n;i++)
{
  n3=n1+n2;
  printf(" %d ",n3);
  n1=n2;
  n2=n3;
}
return 0;
}