//2.Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
	int a,b,sum,diff,product,div;
	printf("Enter the first number............");
	scanf("%d",&a);
	printf("Enter the second number............");
	scanf("%d",&b);
	sum=(a+b);
	diff=(a-b);
	product=(a*b);
	div=(a/b);
	printf("sum=%d\n",sum);
	printf("difference=%d\n",diff);
	printf("product=%d\n",product);
	printf("quotient=%d",div);
	return 0;
	
}

