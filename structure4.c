#include<stdio.h>
struct book
{
    char name[25];
    char author[20];
    int callno;
};
void display();
int main()
{
struct book b={"Let Us C","YPK",101};
display(&b);
return 0;
}
void display(struct book *b1)
{
    printf("%s %s %d",b1->name,b1->author,b1->callno);
}