#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float radius, area;
	printf("Input the radius:  ");
	scanf( "%f",&radius);
	area = 3.14 * radius * radius;
	printf("The area of the disk(r = %.2f) is %.2f\n", radius,area);
	printf("The area of the disk(r = %f) is %f\n", radius,area);
	int width, length, s;
	printf("width: ");
	scanf("%d", &width);
	printf("length: ");
	scanf("%d", &length);
	s = width * length;
	printf("s(%d, %d)=%d", width,length,s);
	
	return 0;
}
