/*2. Write a C program to Convert temperature from Celsius to Fahrenheit using the
formula: F = (C * 9/5) + 32
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float celsius,a;
	double fahrenheit;
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n..............................................\n");
	printf("Enter the temperature in celsius...................");
	scanf("%f",&celsius);
	a=(9/5.0);
	fahrenheit=(celsius*(a)+32);
	printf("The temperature in fahrenheit is...........................%lf",fahrenheit);
	return 0;
	

}

