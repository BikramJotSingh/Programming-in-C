//13.Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
	int Y;
	printf("Enter the year..........");
	scanf("%d",&Y);
	if ((Y%100!=0)&&(Y%4==0)||(Y%400==0))
	printf("Year is Leap");
	else
	printf("Year is not Leap");
	return 0;
	
}
