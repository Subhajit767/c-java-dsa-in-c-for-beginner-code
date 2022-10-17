#include<stdio.h>
int main()
{
int first,last,middle,n,a[100],i,search;
printf("Enter the no of elements in an array:\n");
scanf("%d",&n);
printf("Enter %d elements in a sorted order:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the element to be searched:\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
    if(a[middle]>search)
    last=middle-1;
    else if(a[middle]==search)
    {
        printf("%d found at %d location.",search,middle+1);
        break;
    }
    else
    first=middle+1;
    middle=(first+last)/2;
}
return 0;
}