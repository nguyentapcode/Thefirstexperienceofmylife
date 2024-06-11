#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob = 2011; //decimal save in RAM
	int grade = 10; //decimal save in RAM
	printf("Your year of birth is %d\n", yob);
	printf("Your grade is %d\n", grade);
	printf("Bien yob nam o vi tri la byte thu %u\n", &yob);
	printf("The address of vairable grade is %u\n", &grade);
	//tinh tuoi-> ten goi cho con so noi ve so nam minh da song
	//cong thuc tinh tuoi: nam hien hanh - nam sinh,tuoi = 2022-yob
	int age = 2024 - yob;
	printf("As I guess, you are %d years old\n", age);
	return 0;
}
