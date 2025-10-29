//10.Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
	int hours,minutes,seconds;
	int sec;
	printf("Enter the time in seconds..........");
	scanf("%d",&sec);
	hours=(sec/3600);
	minutes=(sec%3600)/60;
	seconds=(sec%60);
	printf("%dHH:%dMM:%dSS",hours,minutes,seconds);
	return 0;
}
