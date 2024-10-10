#include <stdio.h>

// Multiplication table - Matrix display

void main() {
    int x, y;


    // output the header row
    printf_s("  * ");    // empty space needed to arrange the header row
    for (x = 1; x <= 10; x++) {
        printf_s("%4d", x);   // %4d 4 character wide space needed to arrange the numbers
    }
    printf_s("\n");   //new line after the4 header row
    printf_s("--------------------------------------------\n");



    for (x = 1; x <= 10; x++) {
        printf_s("%2d |", x);    // output the column row with 2 character wide space needed

        for (y = 1; y <= 10; y++) {
            printf_s("%4d", x * y);   // output the multiplication result
        }
        printf_s("\n");
    }


}