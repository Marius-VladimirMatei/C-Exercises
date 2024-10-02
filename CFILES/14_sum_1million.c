#include <stdio.h>

int main() {
	int number1, number2, number3;
	int sum;
	int iterations;

	// Prompt for user input


	printf_s("Enter the first number: ");
	scanf_s("%d", &number1);

	printf_s("Enter the second number: ");
	scanf_s("%d", &number2);

	printf_s("Enter the third number: ");
	scanf_s("%d", &number3);

	//make the sum of numbers
	sum = number1 + number2 + number3;


	if (sum > 1000000) {
		printf_s("1000000 EXCEDEED!\n");
		return 0;
	}

	printf_s("The sum of your numbers is: %d\n", sum);


	// how many iterations of the sum up to 1 million

	while (sum < 1000000) {
		iterations = 1000000 / sum;
		printf("The sum of your numbers was %d times iterated to reach of 1,000,000.", iterations);
		return 0;
	}
}