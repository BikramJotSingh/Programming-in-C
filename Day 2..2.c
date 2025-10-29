/*4.Write a program to calculate the area and circumference of a circle given its radius.
Area=3.14*(r*r)
Circumference=2*(3.14*r)
*/
#include<stdio.h>
int main()
{
	double r,area,circumference,c,b;
	printf("Enter the radius of circle.............");
	scanf("%lf",&r);
	c=(r*r);
	area=(3.14*c);
	b=(3.14*r);
	circumference=(2*b);
	printf("Area of circle is......%lf\n",area);
	printf("Circumference of circle is........%lf",circumference);
	return 0;
	
}

