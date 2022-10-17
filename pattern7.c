#include<stdio.h>
int main()
{
int i,j,k=68;
printf("The required pattern is:\n");
for(i=1;i<=4;i++)
{
    for(j=1;j<i;j++)
    printf("  ");
    for(j=4;j>=i;j--)
    printf("%c ",k);
    k--;
    printf("\n");
}
return 0;
}