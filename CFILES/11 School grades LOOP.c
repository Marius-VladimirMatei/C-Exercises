#include <stdio.h>


// School grades LOOP

void main() {


    int number;
    char choice;

    do {
        printf_s("Please enter a grade between 0 - 400: \n");

        scanf_s("%d", &number);


        //grade check

        if (number < 0 || number > 400) {
            printf_s("Grade NOT in the range. Please enter a grade between 0 - 400.\n");
        }
        else if (number >= 0 && number <= 199) {
            printf_s("Durchgefallen\n");
        }
        else if (number >= 200 && number <= 249) {
            printf_s("Genügend\n");
        }
        else if (number >= 250 && number <= 299) {
            printf_s("Befriedigend\n");
        }
        else if (number >= 300 && number <= 349) {
            printf_s("Gut\n");
        }
        else if (number >= 350 && number <= 400) {
            printf_s("Sehr gut\n");
        }

        // clear input buffer
        while (getchar() != '\n');


        // prompt user for permission to continue
        printf_s("Do you want to grade further? (y/n): ");

        // the white space before %c tells scanf_s to skip any leading whitespace and newlines
        scanf_s("%c", &choice);

    }

    while (choice == 'y' || choice == 'Y');

    printf_s("Thank you for using the program!\n");


}