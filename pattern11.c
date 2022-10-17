#include<stdio.h>
int main()
{
int i,j,k=68;
printf("The required pattern is:\n");
for(i=0;i<4;i++)
{   
    k=68-i;
    for(j=0;j<i;j++)
    printf(" ");
    for(j=4;j>i;j--)
    {
        printf("%c",k);
        k--;
    }
    printf("\n");
}
return 0;
}