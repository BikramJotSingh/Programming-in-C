/*Experiment 3: Conditional Statements
3.1 Write a C program to check whether a number is Even or Odd.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n......................................\n");
	printf("Enter the number............");
	scanf("%d",&n);
	if((n%2)==0)
	printf("Even %d",n);
    else
	{
		printf("odd %d",n);
	}
	return 0;
}
