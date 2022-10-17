#include<stdio.h>
int main()
{
int *p,*p1,a[100],b[100],n,i;
printf("Enter the number of elements:\n");
scanf("%d",&n);
p=&a;
p1=&b;
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&*(p+i));
for(i=0;i<n;i++)
printf("%d = %d\n",i,*(p+i));
for(i=0;i<n;i++)
*(p1+i)=*(p+i);
for(i=n-1;i>=0;i--)
printf("After copying %d =%d\n",i,*(p1+i));
return 0;
}