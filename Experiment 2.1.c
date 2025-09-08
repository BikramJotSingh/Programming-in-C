/*Experiment 2: Operators 
1. Write a C program to calculate the area and perimeter of a rectangle based on
its length and width.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int length,width,area,perimeter;
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.................................................\n");
	printf("Enter the length of a rectangle.................");
	scanf("%d",&length);
	printf("Enter the width of a rectangle........................");
	scanf("%d",&width);
	area=(length*width);
	perimeter=(2*(length+width));
	printf("The area of rectangle is...........%d\n",area);
	printf("The perimeter of a rectangle is..................%d",perimeter);
	return 0;
	

}


