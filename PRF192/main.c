include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Viet app tinh tuoi cua ai do dua tren nam sinh
	//nhap vao tu ban phim.Sau do in ra tuoi
	//cong thuc tinh tuoi:age = 2024 - nam sinh(lay nam hien hanh tu may tinhs
	//x = 10;
	
	int yob, age;
//	printf("Your year of birth is %d\n", yob);
printf("Please input your yob: ");
scanf("%d", &yob);
age = 2022 - yob;
printf(" As i guess, you are %d years old\n", age);

	return 0;
}
