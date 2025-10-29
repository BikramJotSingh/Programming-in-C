/*2.WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user. 
*/
#include<stdio.h>
#include<math.h>
int main()
{
	double s1,s2,s3,hypotense,perpendicular,base;
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n......................................\n");
	printf("Enter the first sides of a triangle...........");
	scanf("%lf",&s1);
	printf("Enter the second sides of a triangle...........");
	scanf("%lf",&s2);
	printf("Enter the third sides of a triangle...........");
	scanf("%lf",&s3);
	if(s1+s2>s3&&s2+s3>s1&&s3+s1>s2)
	printf("Your triangle is valid.....\n");
	else
	printf("your triangle is not valid\n");
	if((s1>s2)&&(s1>s3))
	{
		hypotense=s1;
		perpendicular=s2;
		base=s3;
	}
	else if((s2>s1)&&(s2>s3))
	{
		hypotense=s2;
		perpendicular=s1;
		base=s3;
	}
	else
	{
		hypotense=s3;
		perpendicular=s1;
		base=s2;
	}
	if(((s1+s2)>s3)||((s2+s3)>s1)||((s1+s3)>s2))
    {
	    if((s1==s2)&&(s2==s3))
	    {
	    	printf("Equilateral Triangle");
		}
		else if(s1==s2||s2==s3||s1==s3)
		{
			printf("Isosceles Triangle");
		}
		else
	if((hypotense*hypotense)==(perpendicular*perpendicular)+(base*base))	
		{
			printf("Right angle Triangle");
		}
		else{
			printf("Scalene");
		}
    }
	return 0;
	    
}


