#include<string.h>
#include<stdio.h>
int main()
{
char s[100];
int lines=0,words=0,characters=0,i;
printf("Enter a string:\n");
scanf("%[^/n]s",s);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]=='\n')
    {
        lines++;
        words++;
    }
    else if(s[i]==' ' || s[i]=='\t')
        words++;
    else if(s[i]!='\n' && s[i]!=' ')
        characters++;
}
if(characters>0)
{
    words++;
    lines++;
}
printf("Total no of words are %d\n",words);
printf("Total no of lines are %d\n",lines);
printf("Total no of characters are %d\n",characters);
return 0;
}