#include<stdio.h>
int copy(char *t,char *s)
{
    while(*s)
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}
int main()
{
char *source[100],*target[100];
printf("Enter the 1st string:\n");
gets(source);
copy(&target,&source);
printf("After copying target string is %s",target);
return 0;
}