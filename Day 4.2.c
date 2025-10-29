//8.Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter the number till where you want the sum...........");
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum till %d = %d",n,sum);
	return 0;
}

