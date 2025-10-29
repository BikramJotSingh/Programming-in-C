//6.Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number.....");
	scanf("%d",&a);
	printf("Enter the second number.....");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\n",a);
	printf("b=%d",b);
	return 0;
	
}


