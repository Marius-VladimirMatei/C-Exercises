#include <stdio.h>

int main() {
    int number1, number2, number3;
    long long sum = 0;  // Using long long to handle large sums
    int iterations = 0;

    while (sum < 1000000) {
        // Prompt for user input
        printf_s("Enter three numbers:\n");

        printf_s("Number 1: ");
        scanf_s("%d", &number1);

        printf_s("Number 2: ");
        scanf_s("%d", &number2);

        printf_s("Number 3: ");
        scanf_s("%d", &number3);

        // Add the numbers to the sum
        sum = number1 + number2 + number3;

        // Increment the iteration counter
        iterations++;

        // Optional: Display current sum
        printf_s("Current sum: %lld\n\n", sum);

        
    }

    // Output the results
    printf_s("Sum reached or exceeded 1,000,000!\n");
    printf_s("Final sum: %lld\n", sum);
    printf_s("Number of iterations: %d\n", iterations);

    return 0;
}