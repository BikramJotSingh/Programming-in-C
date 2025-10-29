//16.Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number.........\nEnter the second number..........\nEnter the third number...........\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&c)
	printf("Largest is %d",a);
	else if (b>c&&a)
	printf("Largest is %d",b);
	else
	printf("Largest is %d",c);
	return 0;
}

