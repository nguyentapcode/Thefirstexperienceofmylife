#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1415;
//ki hieu cho vung ram read-only
//viet app nhap vao ban kinh cua hinh tron, sau do in ra dien tich
//cong thuc: s = Pi * r^2

int main(int argc, char *argv[]) {
	float radius,  area;
	printf("Input a radius of a disk: ");
	scanf("%f", &radius);
//	area = 3.14 * radius * radius;
area = PI * radius * radius;
	printf("The area of the disk (r = %.2f) is %.2f\n", radius, area);
	printf("The area of the disk (r = %f) is %f\n", radius, area);
	// default so thuc in 6 phan thap phan
	return 0;
}
