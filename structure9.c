#include<stdio.h>
struct information
{
    int rollno;
    char name[100];
    int age;
    char address[1000];
}a[10];
int main()
{
    int n,i;
for(i=0;i<2;i++)
{
printf("Enter the corresponding student roll no,name,age and address of a student:\n");
scanf("%d%s%d%s",&a[i].rollno,&a[i].name,&a[i].age,&a[i].address);
}
for(i=0;i<2;i++)
{
    if(a[i].age==14)
    printf("%s having age 14\n");
    if(a[i].rollno%2==0)
    printf("%s having even roll no %d\n",a[i].name,a[i].rollno);
}
printf("Enter a roll no to search its information:\n");
scanf("%d",&n);
for(i=0;i<2;i++)
{
    if(n==a[i].rollno)
    printf("The corresponding student name is %s having age %d and having address %s",a[i].name,a[i].age,a[i].address);
}
return 0;
}