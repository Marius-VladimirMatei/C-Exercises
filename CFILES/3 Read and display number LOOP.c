#include <stdio.h>

void main() {
    int num;
    char choice;

    do {
        // prompt user for input and read the number
        printf("Enter a number: ");
        scanf_s("%d", &num);

        // clear input buffer
        while (getchar() != '\n');

        // display the number from the user
        printf("Your number is: %d\n", num);

        // prompt user for permission to continue
        printf("Do you want to enter another number? (y/n): ");

        // the white space before %c tells scanf_s to skip any leading whitespace and newlines
        scanf_s(" %c", &choice); 

    } 
    
    while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the program!\n");

}