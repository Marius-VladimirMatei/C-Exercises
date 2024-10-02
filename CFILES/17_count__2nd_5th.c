#include <stdio.h>

// every 2nd and every 5th number

int main() {
    int i;

    printf("Here is every 2nd number from 1-50:\n");

    for (i = 1; i <= 50; i++) {
        
        if (i % 2 == 0) {
            printf_s("%d\n", i);
        }
    }
    printf_s("Here is every 5th number from 1-50:\n");

    for (i = 1; i <= 50; i++) {
        
        if (i % 5 == 0) {
            printf_s("%d\n", i);
        }
    }

    return 0; 
}