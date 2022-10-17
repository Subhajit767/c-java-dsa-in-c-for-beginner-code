#include<stdio.h>
int main()
{
int i,j,temp,min,n,a[100];
printf("Enter the number of elements in an array:\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
    {
        if(a[min]>a[j])
        min=j;
    }
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
}
printf("Array after implementing selection sort is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}