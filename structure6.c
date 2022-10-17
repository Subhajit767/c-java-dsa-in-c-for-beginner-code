#include<stdio.h>
int main()
{
struct id
{
    int rollno;
    char name[30];
    int age;
}b[5];
int i;
for(i=0;i<5;i++)
{
    printf("Enter roll no,names,age\n");
    scanf("%d%s%d",&b[i].rollno,&b[i].name,&b[i].age);
}
printf("The required roll no,name and age are %d %s %d respectively",b[2].rollno,b[2].name,b[2].age);
return 0;
}