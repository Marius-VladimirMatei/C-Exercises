#include <stdio.h>

//read number => display number

int main() {

	// user input
	int num;
	printf_s("Enter a number: \n");

	// compiler read and output
	scanf_s("%d", &num);
	printf("The number is: %d\n", num);
	return 0;
}
