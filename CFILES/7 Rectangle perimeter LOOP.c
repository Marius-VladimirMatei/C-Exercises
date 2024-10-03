#include <stdio.h>


// Rectangle perimeter with user choice to continue

void main() {

    
    float length;
    float width;
    char choice;

    do {
        // user input and compiler read
        float length;
        printf_s("Please enter the Length: \n");
        scanf_s("%f", &length);

        float width;
        printf_s("Please enter the Width: \n");
        scanf_s("%f", &width);

        // formula and output
        float perimeter = 2 * (length + width);
        printf_s("The perimeter of your rectangle is: %.2f\n", perimeter);


        // clear input buffer
        while (getchar() != '\n');


        // prompt user for permission to continue
        printf_s("Do you want to calculate further? (y/n): ");

        // the white space before %c tells scanf_s to skip any leading whitespace and newlines
        scanf_s("%c", &choice);

    }

    while (choice == 'y' || choice == 'Y');

    printf_s("Thank you for using the program!\n");


}