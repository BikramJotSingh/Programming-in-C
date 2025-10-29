/*17.Write a program to find the roots of a quadratic equation and categorize them.
D=(pow(b,2)-4*a*c)
*/
#include<stdio.h>
#include<math.h>
int main()
{

	int b,a,c,D,d1,d2;
	printf("Enter the value of a\nEnter the value of b\nEnter the value of c\n");
	scanf("%d%d%d",&a,&b,&c);
	D=(pow(b,2)-4*a*c);
	d1=(-b+sqrt(D))/(2*a);
	d2=(-b-sqrt(D))/(2*a);
	if (D>=1)
	printf("Roots are real and different : %d,%d",d1,d2);
	else if (D==0)
	printf("Roots are real and same : %d,%d",d1,d2);
	else
	printf("Roots are complex");
	return 0;
}

