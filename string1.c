#include<stdio.h>`  
int main()
{
int i,flag=0;
char s[100],t[100];
printf("Enter the 1st string:\n");
gets(s);
printf("Enter the 2nd string:\n");
gets(t);
for(i=0;s[i]!='\0' || t[i]!='\0';i++)
{
    if(s[i]!=t[i])
    {
        flag=1;
        break;     
    }
}
if(flag==0)
printf("Same.....");
else
printf("Not Same....");
return 0;
}