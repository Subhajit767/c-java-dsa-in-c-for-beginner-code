#include<stdio.h>
int main()
{
int i,j,k=0;
printf("The required pattern is:\n");
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
    {
        if(k==0)
          k=1;
        else if(k==1)
          k=0;
        printf("%d",k);
    }
    printf("\n");
}
return 0;
}