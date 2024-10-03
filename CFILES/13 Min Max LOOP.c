#include <stdio.h>


// Min Max LOOP

void main() {


    int min;
    int max;
    int i;
    char choice;
	

    do {
		//prompt for MIN input
		printf_s("Please enter the minimum number: ");

		if (scanf_s("%d", &min) != 1) {
			printf_s("Invalid input. Please enter a number.\n");

			// clear input buffer if the input is not an integer
			while (getchar() != '\n'); 

			// skip to the next iteration of the loop
			continue; 
		}
		

		//prompt for MAX input
		printf_s("Please enter the minimum number: ");

		if (scanf_s("%d", &max) != 1) {
			printf_s("Invalid input. Please enter a number.\n");

			// clear input buffer if the input is not an integer
			while (getchar() != '\n');

			// skip to the next iteration of the loop
			continue;
		}

	

		if (min > max) {
			printf_s("Your MIN is greater than MAX.\n");
			
		}

		else if (min == max) {
			printf_s("You have entered identical numbers.\n");
			
		}

		else {
			//output numbers between min and max ++incrementation

			printf_s("Numbers between %d and %d:\n", min, max);

			for (i = min; i <= max; i++) {
				printf_s("%d\n", i);
			}
		}

        // clear input buffer
        while (getchar() != '\n');


        // prompt user for permission to continue
        printf_s("Do you want to grade further? (y/n): ");

        // the white space before %c tells scanf_s to skip any leading whitespace and newlines
        scanf_s("%c", &choice, 1);

    }

    while (choice == 'y' || choice == 'Y');

    printf_s("Thank you for using the program!\n");


}