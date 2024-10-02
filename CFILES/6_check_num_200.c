#include <stdio.h>


// check if number > < 200

int main() {

    int number;
    printf_s("Enter a number: \n");

    scanf_s("%d", &number);
    if (number <= 99) {
        printf_s("Your number is less than 100.\n");
    }
    else if (number >= 100 && number <= 199) {
        printf_s("Your number is NOT less than 100.\n");
    }
    else if (number >= 200) {
        printf_s("Your number is NOT less than 200.\n");
    }
    return 0;
}
