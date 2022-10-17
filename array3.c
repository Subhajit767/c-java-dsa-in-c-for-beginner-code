#include<stdio.h>
int main()
{
int i,j,temp,n,a[100];
printf("Enter the number of elements in an array:\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("Array after implementing bubble sort is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}