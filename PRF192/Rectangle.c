#include <stdio.h>
#include <stdlib.h>

//viet app tinh dien tich hcn voi 2 canh nhap tu ban phim,in ra ket qua,cong thuc tinh s = dai x rong

int main(int argc, char *argv[]) {
	int width,length,area;
	printf("You are required to input the size of a rectangle\n");
	printf("Input the width: ");
	scanf("%d", &width);
    printf("Input the length: ");
    scanf("%d", &length);
    area = width * length;
    printf("The area of a rectangle(%d, %d) is %d\n", width, length, area);
	return 0;
}
