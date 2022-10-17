#include<stdio.h>
int main()
{
int i,n,j;
printf("Enter the number of rows:\n");
scanf("%d",&n);
printf("The required pattern is:\n");
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    printf("*");
    printf("\n");
}
return 0;
}