#include<stdio.h>
#include<conio.h>
int main()
{
	int refyear=1900,diff,year,totaldays=0,days=0,day,leap;
	printf("Enter the Year.............");
	scanf("%d",&year);
	diff=year-refyear;
	leap=0;
	year=0;
	while(refyear<year)
	if(refyear%100==0)
	{
	
		if(refyear%400==0)
		leap=+1;
    }
	else
	{
		if(refyear%4==0)
		leap=+1;
	}
	refyear=+1;
    totaldays=(diff-leap)*365+leap*366;
    day=(totaldays%7);
    switch(day)
{
    case 0:
	printf("Monday");
	break;
    case 1:
	printf("Tuesday");
	break;
    case 2:
	printf("Wednesday");
	break;
    case 3:
	printf("Thursday");
	break;
    case 4:
	printf("Friday");
	break;
    case 5:
	printf("Saturday");
	break;
    case 6:
	printf("sunday");
	break;
}
	getch();
	return 0;
	
	

}
