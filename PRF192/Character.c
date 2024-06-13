#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Hay luu 1 ki tu va in ra man hinh
int main(int argc, char *argv[]) {
	//char firstChar = 'V'; // su dung cap nhay don de luu 1 ki tu, 1 byte trong RAM on off thNH KI TU v
	// DUNG %C de chi cho CPU biet cach on off,de no mo vao chip BIOS/UEFI tren mainboard de tim cach anh xa thanh ki tu tren man hinh
	//day la su phoi hop cua CPU + RAM + Keyboard + VGA Card + Printer + Monitor + HDD/SDD + BIOS/UEFI
	char firstChar = 234;
	printf("The 1st letter in ur name is %c\n", firstChar);
	printf("The ASCII code of %c is %d\n", firstChar, firstChar);
	
	
	return 0;
}
