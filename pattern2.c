#include<stdio.h>
int main()
{
int i,j,k=1,n;
printf("Enter the numberof rows:\n");
scanf("%d",&n);
printf("The required pattern is:\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d  ",k);
        k++;
    }
    printf("\n");
}
return 0;
}