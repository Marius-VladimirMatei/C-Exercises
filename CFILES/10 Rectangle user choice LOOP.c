#include <stdio.h>


// Rectangle area with user choice to continue and LOOP

void main() {


    float length;
    float width;
    int choice;
    char usrchoice;

    do {
        //Ask the user for choice
        printf_s("Chose what to determine: \n");
        printf_s("1. Perimeter\n");
        printf_s("2. Area\n");
        printf_s("Please enter your choice (1 or 2): ");
        scanf_s("%d", &choice);

        // read user input
        printf_s("Enter the Length: \n");
        scanf_s("%f", &length);
        printf_s("Enter the Width: \n");
        scanf_s("%f", &width);

        if (choice == 1) {
            float perimeter = 2 * (length + width);
            printf_s("The perimeter of your rectangle is: %.2f\n", perimeter);
        }

        else if (choice == 2) {
            float area = (length * width);
            printf_s("The area of your rectangle is: %.2f\n", area);
        }

        else {
            printf_s("Invalid choice!\n");
        }
       
        // clear input buffer
        while (getchar() != '\n');


        // prompt user for permission to continue
        printf_s("Do you want to calculate further? (y/n): ");

        // the white space before %c tells scanf_s to skip any leading whitespace and newlines
        scanf_s("%c", &usrchoice);

    }

    while (usrchoice == 'y' || usrchoice == 'Y');

    printf_s("Thank you for using the program!\n");


}