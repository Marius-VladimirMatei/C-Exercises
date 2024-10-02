
#include <stdio.h>

// School grades

int main() {

    // user input
    int number;
    printf_s("Enter the grade between 0 - 400: \n");

    scanf_s("%d", &number);
    

    //grade check

    if (number < 0 || number > 400) {
        printf_s("Grade NOT in the range. Enter the grade between 0 - 400.\n");
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

    return 0;
}