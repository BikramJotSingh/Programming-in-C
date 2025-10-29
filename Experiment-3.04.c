#include <stdio.h>
#include <math.h>
int main() {
float x1, y1, x2, y2, x3, y3, area;
printf("Name - Bikram Jot Singh\nSAP ID - 590027095\nCourse-BCA\nBatch-5");
printf("\n.................................................\n");
printf("Enter coordinates of first point (x1, y1)........ ");
scanf("%f %f", &x1, &y1);
printf("Enter coordinates of second point (x2, y2)........ ");
scanf("%f %f", &x2, &y2);
printf("Enter coordinates of third point (x3, y3).......... ");
scanf("%f %f", &x3, &y3);
area =(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
if (area == 0) {
printf("\nThe points are collinear.\n");
} else {
    printf("\nThe points are not collinear.\n");
}
return 0;
 
}
