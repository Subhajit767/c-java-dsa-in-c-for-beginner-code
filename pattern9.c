#include<stdio.h>
int main()
{
int i,j,k=1;
printf("The required pattern is:\n");
for(i=1;i<=4;i++)
{
       
    for(j=1;j<=i;j++)
    {
        printf("%d ",k);
        if(k==1)
        k=0;
        else if(k==0)
        k=1;
    }
    printf("\n");
}
return 0;
}