#include<stdio.h>
void xstrcpy(char *t,char *s)
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}
int main()
{
    char source[]="Sayonara";
    char target[20];
    xstrcpy(target,source);
    printf("source string=%s\n",source);
    printf("target source=%s\n",target);
    return 0;
}