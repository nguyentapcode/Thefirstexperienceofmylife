#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob, age;
	//printf("Your year of birth is %d\n", yob);
	printf("Please input your yob: ");
	scanf("%d", &yob);
	age = 2024 - yob;
	printf("As i guess, you are %d years old\n",age);
	return 0;
}
