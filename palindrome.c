#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,j,flag=0,n;
printf("Enter a string\n");
gets(s);
n=strlen(s);
for(i=0;i<=n-1;i++)
{
    if(s[i]!=s[n-i-1])
    {
        flag=1;
        break;
    }
}
if(flag==0)
printf("%s is a palindrome string.......\n",s);
else
printf("%s is not a palindrome number........\n",s);
return 0;
}