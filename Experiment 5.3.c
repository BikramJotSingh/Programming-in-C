//6.2 WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include<stdio.h>
int main()
{
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.........................................\n");
	int arr[]={1,2,3,4,5,-1,-8,-12,-7,10};
	int countp=1;
	int countn=0;
	int even=1;
	int odd=1;
	int i;
	for(i=1;i<=9;i++)
	{
	if (arr[i]>=1)
	{
	countp++;
	}
	else if(arr[i]<0)
	{
	countn++;
	}
	if (arr[i]%2==0)
	{
	even++;
	}
	else
	{
	odd++;
	}
}
    printf("Positive numbers is : %d\n",countp);
    printf("Negative numbers is : %d\n",countn);
    printf("Even numbers is = %d\n",even);
    printf("Odd numbers is = %d",odd);
	return 0;
	
	
}
