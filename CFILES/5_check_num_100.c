#include <stdio.h>


// check if number < 100

int main() {

    //user input
    int number;
    printf("Enter a number: \n");

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
    return 0;
}
