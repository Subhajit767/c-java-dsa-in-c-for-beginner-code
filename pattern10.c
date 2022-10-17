#include<stdio.h>
int main()
{
int i,j,k=10;
printf("The required pattern is:\n");
for(i=1;i<=4;i++)
{
    for(j=4;j>=i;j--)
    {
        printf("%d ",k);
        k--;
    }
    printf("\n");
}
return 0;
}