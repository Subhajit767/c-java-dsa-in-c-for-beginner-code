#include<stdio.h>
struct complex
{
    int r;
    int i;
}a1,a2;
int main()
{
printf("Enter the real and imaginaery part of 1st complex number:\n");
scanf("%d%d",&a1.r,&a1.i);
printf("Enter the real and imaginaery part of 2nd complex number:\n");
scanf("%d%d",&a2.r,&a2.i);
int r1,i1;
r1=a1.r*a2.r-a1.r*a2.i;
i1=a1.r*a2.i+a1.i*a2.r;
printf("The multiplication of 2 complex number is %d+%di",r1,i1);
return 0;
}