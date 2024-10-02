#include <stdio.h>


// Rectangle area

int main() {

    // user input
    float length;
    printf_s("Enter the Length: \n");
    scanf_s("%f", &length);

    float width;
    printf_s("Enter the Width: \n");
    scanf_s("%f", &width);

    // formula and output
    float area = (length * width);
    printf_s("The area of your rectangle is: %.2f", area);

    return 0;
}