#include<stdio.h>
int main()
{
struct address
{
    char ph[10];
    char city[25];
    int pin;
};
struct emp
{
    char name[30];
    struct address a;
};
struct emp e={"jeru","5246632254","durgapur",713213};
printf("name= %s  phone= %s\n",e.name,e.a.ph);
printf("city= %s  pin= %d\n",e.a.city,e.a.pin);
return 0;
}