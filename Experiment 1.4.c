//1. WAP a C program to perform four arthmatical operations on two variables.
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,sum,sub,multiplication;
	float division;
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.........................................\n");
	printf("Enter a first number..................");
	scanf("%d",&a);
	printf("Enter a second number......................");
	scanf("%d",&b);
	sum=a+b;
	printf("The sum of two entered number is...................%d\n",sum);
	sub=a-b;
	printf("The subtraction of two entered number is.......................%d\n",sub);
	multiplication=a*b;
	printf("The multiplication of two entered number is...........%d\n",multiplication);
	division=a/b;
	printf("The division of two entered number is....................%f\n",division);
	return 0;

 } 

