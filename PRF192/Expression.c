#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10, b = 3;
	int result = a - b;
	printf("a = %d\nb = %d\n",a,b);
	printf("result = %d\n", result);
	result = a * b;
	printf("result = %d\n", result);
	result = a / b;
	printf("result = %d\n",result);
	float r = a / b; //3 ma lai luu trong thuc nen la 3.000000
	printf("r = %f\n", r);
	float re = a * 1.0 / b;
          re = a / (b / 1.0) ;
	printf("re = %f\n", re);
	// phep toan dac biet, 1 ngoi (1 so hang), Tang tu than
	int n = 10;
	//1. n dang bang may
	printf("n = %d\n", n);
	//2. Nhà n o dau?
	printf("the address of n is %u\n", &n);
	//3. tui muon tang n len 1 don vi/1 gia tri
	//n = 11; sai, dich la gan n = 11, on-off vung ram thanh con so
	//hong co tinh toan, dau co tang n = 11 ma minh tu tinh ben ngoai may tinh
	n = n + 1;
	//doc: n = n se dc gan 1 gia tri nao do, la may tu tu ta xem
	// phep tinh nay goi la phep tang tu than,tu lam ra tien tu bo sung vao vi cua ta luon
	//age = 2022 - yob; khong tang giam tu than
	printf("#1 increasing by 1: n = %d\n", n);
	//4. tui muon tang n len tiep 1 don vi nua-> n = 12, vi truoc do n = 11
	//n = n + 1; okie
	n += 1; //viet tat hon,tui n muon tang 1, + roi = gan luon
	printf("#2 increasing by 1: n = %d\n", n);//12
	//5. toi muon tang tiep n len 1 nhat nua!!!
	//n = n + 1; okie
	//n += 1; okie
	n++;
	printf("#3 increasing by 1: n = %d\n", n); //13
	//6. TOI VAN MUON TANG THEM 1 NHAT NUA
	++n;
	printf("#4 increasing by 1: n = %d\n", n); //14
	int m = 10, r1;
	printf("m = %d\n", m); //10
	//r1 = m++;
     r1 = ++m; 
	printf("r1 = %d; m = %d\n", r1, m);
	//phep tu than ++ --
	//1. Tui muon tang m len 1 don vi
	m++;
	printf("m now is:%d\n", m);
	//2. tui muon tang m len 8 don vi
	//m ++++++++++++...; lay loi qua, khong co
	//m = m + 8; okie
	m += 8; //pro
	printf("for the last, m now is:%d\n", m);//20
	//tang len mot luong nhat dinh ta dung toan tu nhoi tu than: += -= *= /= %=
	//m *= 8; m = m * 8
	
	
	return 0;
}
