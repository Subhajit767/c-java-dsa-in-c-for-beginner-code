#include<stdio.h>
int main()
{
    int a,b,*c,*d,max;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    c=&a;
    d=&b;
    if(*c>*d)
    max=*c;
    else
    max=*d;
    printf("The maximum of two number is %d",max);
return 0;
}