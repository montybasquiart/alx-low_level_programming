# A README file debugging and showing what each function is doing

0. Multiple mains - [0-main.c](./0-main.c) - A function that tests that tests if positive_or_negative() gives the correct output when given a case of 0.
* You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
* You are not allowed to add or remove lines of code, you may change only one line in this task.

1. Like, comment, subscribe - [1-main.c](./1-main.c) - Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
* Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
* You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

2. 0 > 972? - [2-largest_number.c](./2-largest_number.c) - This program prints the largest of three integers.
* Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

3. Leap year - [3-print_remaining_days.c](./3-print_remaining_days.c) - This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
* Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
* Line count will not be checked for this task.
* You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
* You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
