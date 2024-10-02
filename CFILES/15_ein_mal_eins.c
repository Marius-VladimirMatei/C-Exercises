#include <stdio.h>

int main() {
    int x, y;

    // Ein mal Eins x * y
    
    // loop through numbers 1 to 10 for the multiplication table
    for (x = 1; x <= 10; x++) {
        for (y = 1; y <= 10; y++) {
            // output every operation
            printf("%d x %d = %d\t", x, y, x * y);
        }
        
        // move to the next line after each row
        printf("\n"); 
    }

    return 0;
}