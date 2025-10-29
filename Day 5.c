/*9.Write a program to calculate simple and compound interest for given principal, rate, and time.
SI=(P*R*T/100)
cI=(P(pow((1+r/100)*T)))
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double P,SI,CI,R,T,c,a,d,K;
	printf("Enter the principal amount.........");
	scanf("%lf",&P);
	printf("Enter the rate.........");
	scanf("%lf",&R);
	printf("Enter the time.........");
	scanf("%lf",&T);
	c=R/100;
	SI=(P*c*T);
	K=(P*(pow((1+c),T)));
	CI=K-P;
	printf("SI..........%lf",SI);
	printf("CI..........%lf",CI);
	return 0;
	
	
	
	
}
