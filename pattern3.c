#include<stdio.h>
int main()
{
int i,j,k,r=1,c,n;
printf("Enter the number of rows:\n");
scanf("%d",&n);
printf("The required pattern is:\n");
for(i=1;i<=n;i++)
{
    for(k=1;k<=n-i;k++)
    printf(" ");
    c=r;
    for(j=1;j<=i;j++)
    { 
        printf("%d",c);
        c++;
    }
    r++;
    printf("\n");
}
return 0;
}