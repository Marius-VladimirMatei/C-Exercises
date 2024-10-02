#include <stdio.h>


// Rectangle perimeter

int main() {

    // user input
    float length;
    printf_s("Enter the Length: \n");
    scanf_s("%f", &length);

    float width;
    printf_s("Enter the Width: \n");
    scanf_s("%f", &width);

    // formula and output
    float perimeter = 2 * (length + width);
    printf_s("The perimeter of your rectangle is: %.2f", perimeter);

    return 0;
}