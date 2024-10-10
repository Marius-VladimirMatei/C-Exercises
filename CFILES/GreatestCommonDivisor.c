#include <stdio.h>



#define MAX(x, y) ((x) > (y) ? (x) : (y))		//Macro to determine MAX
#define MIN(x, y) ((x) < (y) ? (x) : (y))		//Macro to determine MIN


int main() {
	int x;
	int y;


	// Prompt user for number input

	printf_s("Enter the first positive (natural) number: \n");
	scanf_s("%d", &x);
	printf_s("Enter the first positive (natural) number: \n");
	scanf_s("%d", &y);

	 while (x != y) {
        int larger = MAX(x, y);  // Get the larger number
        int smaller = MIN(x, y); // Get the smaller number

        x = larger - smaller;    // Subtract smaller from larger
        y = smaller;             // Keep the smaller value in 'y'
    }                 
	
	printf_s("The CCD is: %d\n", x);

	return 0;
}