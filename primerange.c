#include<stdio.h>
int main()
{
	int i,flag,j,n1,n2;
	printf("Enter the range:\n");
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<n2;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		printf(" %d ",i);
	}
	return 0;
}