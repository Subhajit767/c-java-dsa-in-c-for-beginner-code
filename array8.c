#include<stdio.h>
int main()
{
int freq[100],a[100],i,j,n,count;
printf("Enter the no of elements:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
freq[i]=-1;
}
for(i=0;i<n;i++)
{
    count=1;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            count++;
            freq[j]=0;
        }
    }
    if(freq[i]!=0)
    freq[i]=count;
}
printf("\nFrequency of all elements in an array is:\n");
for(i=0;i<n;i++)
{
    if(freq[i]!=0)
    printf("%d occurs %d times.\n",a[i],freq[i]);
}
return 0;
}