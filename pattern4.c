#include<stdio.h>
int main()
{
int i,k,r=1,c,n,row=0,column;
printf("Enter the number of rows:\n");
scanf("%d",&n);
printf("The required pattern is:\n");
for(i=1;i<=n;i++)
{
    for(k=1;k<=n-i;k++)
    printf(" ");
    c=r;
    for(k=1;k<=i;k++)
    { 
        printf("%d",c);
        c++;
    }
    r++;
    column=row;
    for(k=2;k<=i;k++)
    {
        printf("%d",column);
        column--;
    }
    row+=2;
    printf("\n");
}
return 0;
}