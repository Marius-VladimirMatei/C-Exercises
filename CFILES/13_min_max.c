#include <stdio.h>

int main() {
	//variables declare
	int min;
	int max;
	int i;
	
	//prompt for input
	printf_s("Enter the minimum number: ");
	scanf_s("%d", &min);

	printf_s("Enter the maximum number: ");
	scanf_s("%d", &max);

	if (min > max) {
		printf_s("Your MIN is greater than MAX.\n");
		return 0;
	}
	
	else if (min == max) {
		printf_s("You have entered identical numbers.\n");
		return 0;
	}
	
	
	//output numbers between min and max ++incrementation

	printf_s("Numbers between %d and %d:\n", min, max);

	for (i = min; i <= max; i++) {
		printf_s("%d\n", i);
	}
	return 0;

	
}