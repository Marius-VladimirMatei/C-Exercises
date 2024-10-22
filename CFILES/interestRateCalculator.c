#include <stdio.h>

// Interest rate calculator


int main() {
	float start_capital;
	float interest_rate = 2; // 4.5 % (4.5 divided by 100)
	float goal;
	int years = 0;


	// Prompt user for input

	printf_s("Enter your Start Capital: \n");
	scanf_s("%f", &start_capital);

	printf_s("Your yearly interest rate is: %.1f\n", interest_rate);

	printf_s("Enter the sum you want to achieve (your goal): \n");
	scanf_s("%f", &goal);

	// Loop until start capital reaches the goal

	while (start_capital <= goal) {

		start_capital += start_capital * (interest_rate / 100); // add the interest rate to S_T
		years++; // years incrementation

	}
	
	printf_s("Your new capital is: %.3f, after %d years.", start_capital, years);

	return 0;
}