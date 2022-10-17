#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,n,temp;
printf("Enter a string:\n");
gets(s);
n=strlen(s);
printf("Before reversing the string the string is %s",s);
for(i=0;i<n/2;i++)
    {
        temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
printf("The reverse of that string is %s",s);
return 0;
}