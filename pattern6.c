#include<stdio.h>
int main()
{
int i,j,l=65;
printf("The required pattern is:\n");
for(i=1;i<=4;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%c  ",l);
        l++;
    }
    printf("\n");
}
return 0;
}