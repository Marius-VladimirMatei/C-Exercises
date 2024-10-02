
#include <stdio.h>


// Rectangle perimeter and area user choice

int main() {

    float length, width;
    int choice;

    //Ask the user for choice
    printf_s("Chose what to determine: \n");
    printf_s("1. Perimeter\n");
    printf_s("2. Area\n");
    printf_s("Enter your choice (1 or 2): ");
    scanf_s("%d", &choice);

    // read user input
    printf_s("Enter the Length: \n");
    scanf_s("%f", &length);
    printf_s("Enter the Width: \n");
    scanf_s("%f", &width);

    if (choice == 1) {
        float perimeter = 2 * (length + width);
        printf_s("The perimeter of your rectangle is: %.2f \n", perimeter);
    }

    else if (choice == 2) {
        float area = (length * width);
        printf_s("The area of your rectangle is: %.2f", area);
    }

    else {
        printf_s("Invalid choice!");
    }
    return 0;

}