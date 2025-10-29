//5.2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.
#include <stdio.h>
int globalVar=40;
void testFunction() 
{
    int localVar=10;
    printf("Inside function: globalVariable = %d, localVar = %d\n", globalVar, localVar);
}

int main() 
{
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.........................................\n");
    printf("Outside function: globalVariable = %d\n", globalVar);
    testFunction();
    return 0;
}
