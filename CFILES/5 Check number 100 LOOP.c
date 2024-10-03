#include <stdio.h>


// check if number < 100

void main() {

    //user input
    int number;
    char choice;
    
    do {
        // prompt user for input and read the number
        printf("Enter a number: ");
        

        // compiler read
        scanf_s("%d", &number);

        

        if (number < 100) {
            printf_s("Your number is smaller than 100.\n");
        }

        else if (number == 100) {
            printf_s("Your number is exactly 100.\n");
        }

        else {
            printf_s("Your number is NOT smaller than 100.\n");
        }

        
        // clear input buffer
        while (getchar() != '\n');

        
        // prompt user for permission to continue
        printf("Do you want to enter another number? (y/n): ");

        // the white space before %c tells scanf_s to skip any leading whitespace and newlines
        scanf_s("%c", &choice);

    }

        while (choice == 'y' || choice == 'Y');

        printf("Thank you for using the program!\n");

        
    }
    



