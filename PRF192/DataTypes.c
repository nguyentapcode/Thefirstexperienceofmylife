#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b =3;//8 byte trong ram da dc cap luu 2 value/con so
	//1. hoi a co gia tri may, b co gia tri may, in ra man hinh
	printf("a = %d; b = %d\n", a, b);
	//2. Hoi nha cua 2 em o dau
	printf("address of a: %u; address of b: %u\n", &a, &b);
	//3. Nhap tu ban phim, scaanf(&)
	//4. Tai 1 thoi diem bien chi luu dc 1 value, mat neu gan value moi cho bien boi ON-Off dao thu tu bit 0,1 la ra so khac ngay
	a = 69;
	//a bang may luc nay? quen nguoi cu 10, chi co 69 luc nay
	printf("a = %d; b = %d\n", a, b);
	// choi voi so thuc
	double c = 0.1, d = 3.14; //10% viet theo kieu so
	//vua khai bao vua gan value, nhieu bien cung dong
	//in ra ket qua hai con so thuc bu
	printf("c = %.2lf; d = %.2lf\n",c,d);
	//Hoi nha cua 2 em c va d. 2 lenh tren cung cung hoi nha cua a b
	printf("address of c: %u; address of d: %u\n", &c,&d);
	//C cung cap 1 lenh de hoi CPU rang, mot data type bat ki
	//Chiem may byte trong ram
	printf("The number of bytes allocated of an int: %d\n",sizeof(int));
	int size = sizeof(int);
	printf("The number of bytes allocated of an int: %d\n",size);	
	printf("The number of bytes allocated of an float: %d\n",sizeof(float));
	printf("The number of bytes allocated of an double: %d\n",sizeof(double));
	//Choi voi long, sso nguyen bu cha ba
	int m = 210000000;//%d
	long money = 3000000000;//&ld
    printf("The amount 1: %d\n",m);
    printf("The amount 2: %ld\n",money);
	return 0;
}
