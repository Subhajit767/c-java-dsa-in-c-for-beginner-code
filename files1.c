#include<stdio.h>
int main()
{
FILE *ptr=NULL;
ptr=fopen("myfiles.txt","a+");

/*char c= fgetc(ptr);
printf("The character I read was %c\n",c);
c=fgetc(ptr);
printf("The character I read was %c\n",c);*/

/*char str[25];
fgets(str,26,ptr);
printf("The string is %s\n",str);
fclose(ptr);*/

fputc('o',ptr);
fputs("This is Subhajit",ptr);
fclose(ptr);
return 0;
}