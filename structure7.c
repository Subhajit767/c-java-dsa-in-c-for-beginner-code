#include<stdio.h>
struct distances
{
    float inch;
    float foot;
}b1,b2;
int main()
{
printf("Enter the 1st foot and inch");
scanf("%f%f",&b1.foot,&b1.inch);
printf("Enter the 2nd foot and inch");
scanf("%f%f",&b2.foot,&b2.inch);
float d1,d2;
d1=b1.foot+b2.foot;
d2=b1.inch+b2.inch;
while(d2>12)
{
    d1++;
    d2-=12;
}
printf("The required distances is %f foot and %f inch",d1,d2);
return 0;
}