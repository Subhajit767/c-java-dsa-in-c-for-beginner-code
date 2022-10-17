#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int n,count,i,j;
printf("Enter a string:\n");
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
    count=1;
    if(s[i])
    {
    for(j=i+1;j<n;j++)
    {
        if(s[i]==s[j])
        {
            count++;
            s[j]='\0';
        }
    }
    printf("The frequency of %c is %d\n",s[i],count);
    }
}
return 0;
}