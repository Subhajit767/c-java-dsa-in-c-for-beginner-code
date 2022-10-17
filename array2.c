#include<stdio.h>
int main()
{
int a[50],pos,i,n;
printf("Enter the number of elements in an array:\n");
scanf("%d",&n);
printf("Enter %d elements in an array:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Define the position of array where you want to delete:\n");
scanf("%d",&pos);
if(pos>=n+1)
printf("Deletion is not possible in the array.\n");
else
{
    for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    printf("The resultant array is:\n");
    for(i=0;i<n-1;i++)
    {
        printf("a[%d]=",i);
        printf("%d\n",a[i]);
    }
}
return 0;
}