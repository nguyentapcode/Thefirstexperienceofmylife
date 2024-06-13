#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//kiem tra xem tuoi cua minh co la thanh xuan hay ko?
	int age = 20;
	if(age >= 20 && age <= 30)
	printf("Chao thanh xuan!!!");
	else
	printf("I don't care!!!");
	// viet doan code moi nhap vao mot con so nguyen sau do in ra thong bao rang con so nay co nam ngoai mien tu doan 1-100 hay ko
	//vi du goi con so can nhap la x, go x = -5 -> ngoai doan 1-100,go x = 50 -> trong doan
	int x;
	printf("Input your interger. I will check if this number is in the range of 1-100 \n");
	printf("Input your interger: ");
	scanf("%d", &x);
	int result;
	result = x < 1 || x > 100;
	printf("range result: %d\n",result);
	if (result = x < 1 || x > 100)
	printf("Number %d is out the range of 1-100\n",x);
	else 
		printf("Number %d is in the range of 1-100\n",x);
	
	return 0;
}
