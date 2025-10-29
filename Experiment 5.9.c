//5.4.Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>
int my()
{
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.........................................\n");
}
void testFunction() 
{
    static int x=40;
    printf("x = %d\n", x);
    x++;
}

int main() {
	my();
    testFunction();
    testFunction();
    testFunction();
    return 0;
}
