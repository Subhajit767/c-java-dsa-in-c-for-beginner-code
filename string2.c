#include<stdio.h>
int main()
{
char *names[]={"Akshay","Subhajit","Avishek","Soumyajit","Atanu","Gopal","Supratim"};
char *temp;
printf("Original: %s %s\n",names[2],names[3]);
temp=names[2];
names[2]=names[3];
names[3]=temp;
printf("New: %s %s\n",names[2],names[3]);
return 0;
}