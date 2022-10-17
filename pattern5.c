#include<stdio.h>
int main()
{
int i,j,k,n,coef=1;
printf("Enter the number of rows:\n");
scanf("%d",&n);
printf("The required pattern is:\n");
for(i=0;i<n;i++)
{
    for(k=0;k<n-i;k++)
    printf("  ");
    for(j=0;j<=i;j++)
    {
        if(j==0||i==0)
        coef=1;
        else
        coef=coef*(i-j+1)/j;
        printf("%4d",coef);
    }
    printf("\n");
}
return 0;
}