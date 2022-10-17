#include<stdio.h>
int main()
{
int a=3,b=4;
printf("Before swapping the values of a and b are %d and %d respectively\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping the values of a and b are %d and %d respectively\n",a,b);
return 0;
}