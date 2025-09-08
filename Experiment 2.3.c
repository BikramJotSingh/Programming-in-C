/*1. Write a C program to calculate the Compound Interest by taking principle,rate and time from user.
formula
CI=principle*(pow((1+rate/100),time))-principle
*/
#include<stdio.h>;
#include<math.h>;
int main()
{
	double principle,rate,time;
	int CI;
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n..............................................\n");
	printf("Enter the principle amount..............");
	scanf("%lf",&principle);
	printf("Enter the rate..................");
	scanf("%lf",&rate);
	printf("Enter the time..............");
	scanf("%lf",&time);
	CI=principle*(pow((1+rate/100),time))-principle; 
	printf("The compound interset is...........................%d",CI);
	return 0;


}




