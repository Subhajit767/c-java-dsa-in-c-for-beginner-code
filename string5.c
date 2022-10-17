#include<stdio.h>
#include<string.h>
int main()
{
char s[100][100],t[100];
int n,i,j;
printf("Enter the number of names:\n");
scanf("%d",&n);
printf("Enter the names:\n");
for(i=0;i<n;i++)
gets(s[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(strcmp(s[i],s[j])>0)
        {
            strcpy(t,s[i]);
            strcpy(s[i],s[j]);
            strcpy(s[j],t);
        }
    }
}
printf("Names in sorted order are:\n");
for(i=0;i<n;i++)
puts(s[i]);
return 0;
}