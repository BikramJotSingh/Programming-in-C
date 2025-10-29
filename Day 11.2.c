//22.Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
#include<math.h>
int main()
{
	double c,s,p1,p2,l1,l2;
	printf("Enter the costprice and selling price..............\n");
	scanf("%lf%lf",&c,&s);
	if (s>c){
	p1=(s-c);
	p2=(p1/c)*(100);
	printf("Profit %2.lf%%",p2);
	}
	else if (c>s){
	l1=(c-s);
	l2=(l1/c)*(100);
	printf("Loss %2.lf%%",l2);
	}else
	printf("No Profit No Loss");

	return 0;
	
}
