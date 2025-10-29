//3.Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
	int L,B,area,perimeter,c;
	printf("Enter the length of a rectangle.........");
	scanf("%d",&L);
	printf("Enter the breath of a rectangle.......");
	scanf("%d",&B);
	area=(L*B);
	c=(L+B);
	perimeter=2*c;
	printf("Area of rectangle is.....%d\n",area);
	printf("Perimeter of rectangle is.....%d",perimeter);
	return 0;
}
