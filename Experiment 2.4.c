/*4 WAP of C to find roots of the quadratic equations.
formula=x = [-b ± v(b² - 4ac)] / 2a.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x,x1,x2;
	printf("enter the value of a which is non 0.................");
	scanf("%lf",&a);
	printf("enter the value of b which should be greater than 1..................");
	scanf("%lf",&b);
	printf("enter the value of c..................");
	scanf("%lf",&c);
	x=(b*b)-4*a*c;
	x1=(-b+sqrt(x))/(2*a);
	x2=(-b-sqrt(x))/(2*a);
	printf("The positive root is..........%lf\n",x1);
	printf("The negative root is..............%lf",x2);
	return 0;
	
}

