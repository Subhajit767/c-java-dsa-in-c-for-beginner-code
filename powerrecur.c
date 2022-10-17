#include<stdio.h>
int power(int b,int e)
{
    if(e!=0)
    return (b*power(b,e-1));
    else
    return 1;
}
int main()
{
int b,e;
printf("Enter base and exponent:\n");
scanf("%d%d",&b,&e);

printf("The power of %d to %d is %d\n",b,e,power(b,e));
return 0;
}