#include<stdio.h>
int main()
{
int i,j,k,n,a[100];
printf("Enter the size of array:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            for(k=j;k<n-1;k++)
            a[k]=a[k+1];
            n--;
            j--;
        }
    }
}
printf("After deleting all duplicate elements:\n");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
return 0;
}