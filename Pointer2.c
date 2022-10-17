#include<stdio.h>
int swap(int *c,int *d)
{
    int t;
    t=*c;
    *c=*d;
    *d=t;
    
}
int main()
{
    int a,b;
    printf("Enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a:%d and b:%d\n",a,b);
    swap(&a,&b);
    printf("After swapping a:%d and b:%d\n",a,b);
return 0;
}