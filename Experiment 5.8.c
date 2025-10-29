//5.3.Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>
int main() {
	printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
	printf("\n.........................................\n");
    int x=12;
    printf("Outer block: x = %d\n", x);

    {
        int y = 30;
        printf("Inner block 1: x = %d, y = %d\n",x, y);

        {
            int z=40;
            printf("Inner block 2: x = %d, y = %d, z = %d\n",x,y,z);
        }
    }
    return 0;
}
