#include<stdio.h>
int main()
{
int n,a[100],max1,max2,i;
printf("Enter the number of elements in an array:\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max1=a[0];
for(i=0;i<n;i++)
{
    if(a[i]>max1)
    {
        max2=max1;
        max1=a[i];
    }
    else if(a[i]>max2 && a[i]<max1)
    max2=a[i];
}
printf("The 2nd largest element from the array is %d\n",max2);
return 0;
}