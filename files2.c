#include<stdio.h>
int main()
{
FILE  *fp=NULL;
char c;
fp=fopen("myfiles.txt","w");
printf("Enter the text then press ctrlZ.\n");
while ((c=getchar())!=EOF)
{
    putc(c,fp);
}
fclose(fp);
fp=fopen("myfiles.txt","r");
printf("The words on the file is: \n");
while ((c=getc(fp))!=EOF)
{
    putchar(c);
}
fclose(fp);
return 0;
}