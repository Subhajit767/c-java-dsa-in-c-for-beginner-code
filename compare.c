#include<stdio.h>
int compare(char s[], char t[])
{
int i,flag=0;
for(i=0;s[i]!='\0' && t[i]!='\0';i++)
{
    if(s[i]!=t[i])
    {
       flag=1;
       break;
    }
}
if(flag==1)
return 1;
else
return 0;
}
int main()
{
char s[100],t[100];
int a;
printf("Enter the 1st string:\n");
gets(s);
printf("Enter the 2nd string:\n");
gets(t);
a=compare(s,t);
if(a==0)
printf("The 2 strings are same........\n");
else
printf("The 2 strings are not same........\n");
return 0;
}