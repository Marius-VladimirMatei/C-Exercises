#include<stdio.h>

// Day of the year - number calculator

void main() {

	int day;
	int month;
	int year;


// Prompt user for input

    printf_s("Enter day: ");
    scanf_s("%d", &day);

    printf_s("Enter month: ");
    scanf_s("%d", &month);

    printf_s("Enter year: ");
    scanf_s("%d", &year);


// Declare function - Leap year check
    // Year - multiple of 4 and NOT multiple of 100;
    //		- multiple of 400;
    //		- Not every four years is a leap year. As a rule, leap years are skipped 
    // if the year is divisible by 100 AND NOT by 400

    int is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);


 // Array with the number of days for each month

    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


// If the year is Leap year => Feb has 29 days!!!

    if (is_leap_year) {
        days_in_month[1] = 29;
    }


// Calculate the day of the year

    int day_of_the_year = 0;
    int i;
    for (i = 0; i < month - 1; i++) {
        day_of_the_year += days_in_month[i];		// sum days of all previous months;
    }

    day_of_the_year += day;		// add the current day from user input

    printf("The day of the year for %d/%d/%d is: %d\n", day, month, year, day_of_the_year);

}
