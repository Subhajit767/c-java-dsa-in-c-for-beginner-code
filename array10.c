#include <stdio.h>

int getSum(int arr[] , int n)
{
	if(n%2==0) // (n) is even
	{
		return 0;
	}
	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	return sum; // (n) is odd
}

// Driver Code
int main()
{
	// Declaring two array one of length odd and other of length even;
	int arr[4]={1,2,3,4};
	int a[5] ={1,2,3,4,5};
	printf("%d\n",getSum(arr,4));// print 0 because (n) is even
	printf("%d\n",getSum(a,5)); // print sum because (n) is odd
}
// This code is contributed by Suruchi Kumari
