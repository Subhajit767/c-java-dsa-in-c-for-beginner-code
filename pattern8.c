#include<stdio.h>
int main()
{
int i,j;
printf("The required pattern is:\n");
for(i=1;i<=4;i++)
{
    for(j=1;j<=4-i;j++)
        printf(" ");
    for(j=1;j<=i;j++)
        printf("*");
    for(j=2;j<=i;j++)
        printf("*");
    printf("\n");
}
return 0;
}