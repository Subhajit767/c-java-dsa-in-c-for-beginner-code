#include<stdio.h>
int main()
{
int a[100],n,i,j,temp;
printf("Enter the no of elements in the array:\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
    j=i;
    while(j>0 && a[j-1]>a[j])
    {
        temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        j--;
    }
}
printf("Sorted order in ascending order using insertion sort:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}