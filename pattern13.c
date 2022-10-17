#include<stdio.h>
#include<string.h>
int main()
{
char c[]="INDIA";
int i,j,n;
n=strlen(c);
for(i=0;i<n;i++)
{
    for (j=0;j<=i;j++)
    printf("%c",c[j]);
    printf("\n");
}
for(i=n-1;i>0;i--)
{
    for(j=0;j<i;j++)
    printf("%c",c[j]);
    printf("\n");
}
return 0;
}