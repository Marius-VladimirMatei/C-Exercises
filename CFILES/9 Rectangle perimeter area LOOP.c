#include <stdio.h>


// Rectangle area with user choice to continue

void main() {


    float length;
    float width;
    char choice;

    do {

        // user input
        float length;
        printf_s("Enter the Length: \n");
        scanf_s("%f", &length);

        float width;
        printf_s("Enter the Width: \n");
        scanf_s("%f", &width);

        // formula and output
        float perimeter = 2 * (length + width);
        printf_s("The perimeter of your rectangle is: %.2f \n", perimeter);

        float area = (length * width);
        printf_s("The area of your rectangle is: %.2f\n", area);


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