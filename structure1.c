#include<stdio.h>
#include<string.h>
int main()
{
struct employees
{
    char name[20];
    int age;
    float salary;
};
struct employees e1={"Sanjay",30,5005.50};
struct employees e2,e3;
strcpy(e2.name,e1.name);
e2.age=e1.age;
e2.salary=e1.salary;
e3=e2;
printf("%s %d %f\n",e1.name,e1.age,e1.salary);
printf("%s %d %f\n",e2.name,e2.age,e2.salary);
printf("%s %d %f\n",e3.name,e3.age,e3.salary);

return 0;
}