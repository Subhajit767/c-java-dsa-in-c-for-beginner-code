#include<stdio.h>
#include<stdlib.h>
int main()
{
   // int *ptr,i,n;
   // printf("Enter the size of array:\n");
   // scanf("%d",&n);
   // ptr=(int *)malloc(n*sizeof(int));
   // printf("Enter the elements:\n");
   // for(i=0;i<n;i++)
   //  scanf("%d",&ptr[i]);
   // for(i=0;i<n;i++)
   //     printf("The index at %d of this array is %d\n",i,ptr[i]);


    int *ptr,i,n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
     scanf("%d",&ptr[i]);
    for(i=0;i<n;i++)
        printf("The index at %d of this array is %d\n",i,ptr[i]);

    
    printf("Enter the size of new array:\n");
    scanf("%d",&n);
    ptr=(int *)realloc(ptr, n*sizeof(int));
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
     scanf("%d",&ptr[i]);
    for(i=0;i<n;i++)
        printf("The new index at %d of this array is %d\n",i,ptr[i]);

    free(ptr);

return 0;
}