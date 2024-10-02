#include <stdio.h>

// count numbers 1-50 every 2nd and every 5th ++incrementation

int main() {
	int i;

	// count every 2nd

	printf_s("Here is every 2nd number from 1-50:\n");

	for (i = 0; i <= 50; i +=2) {
		printf_s("%d\n", i);
	}


	// count every 5th

	printf_s("Here is every 5th number from 1-50:\n");

	for (i = 0; i <= 50; i += 5) {
		printf_s("%d\n", i);
	}

	return 0;
}