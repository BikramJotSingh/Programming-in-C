#include<stdio.h>
int main()
{
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.........................................\n");
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		printf(" ");	
		for(j=1;j<=i;j++)
		printf("%d",j);
	printf("\n");	
		
	}
	return 0;
}
