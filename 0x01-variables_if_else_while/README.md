# 0x01. C - Variables, if, else, while

# A README file describing what each script is doing

##

## Concepts
_For this project, we expect you to look at this concept:_
 * [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)


# Resources
**Read or watch:**
 * [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240206%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240206T222629Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=0765fbe800b572d05814601f3dcfc62049b5fe140f450f2485658af8ee21d180)(_You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”._)
 * [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)
 * [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)
 * [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)
 * [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)
 * [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)
 * [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)
 * [Logical operators](https://intranet.alxswe.com/rltoken/TaX_y6ll4cRfxCrxG8ZuNQ)
 * [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)
 * [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)

##
__man or help:__

      * _ascii (You do not need to learn about scanf, getc, getchar, EOF, EXIT_SUCCESS, time, rand, srand, RAND_MAX, for loops, do...while loops, functions.)_

##
0. Positive anything is better than negative nothing - [0-positive_or_negative.c](./0-positive_or_negative.c) - A program that assigns random number to a variable **n** each time it is executed and checks whether the number stored in the variable **n** is positive or negative.
* The variable **n** will store a different value every time you will run this program
* You don't have to understand what **rand**, **srand**, **RAND_MAX** do. Please do not touch this code
* The output of the program should be:
	* The number, followed by
	- if the number is greater than 0: **is positive**
	- if the number is 0: **is zero**
	- if the number is less than 0: **is negative**
	* followed by a new line
##
1. The last digit - [1-last_digit.c](./1-last_digit.c) - A program that assigns a random number to the variable **n** each time it is executed. By completing the code in order to print the last digit of the number stored in the variable **n**.
   * You can fin the source code [here](https://github.com/alx-tools/0x01.c/blob/master/1-last_digit_c)
  * The variable **n** will store a different value every time you run this program
  * You don't have to understand what **rand**, **srand**, and **RAND_MAX** do. Please do not touch this code
* The output of the program should be:
	* if the last digit of n is greater than 5: the string and is greater than 5
	* if the last digit of n is 0: the string and is 0
	* if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
	* followed by a new line
##
2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game - [2-print_alphabet.c](./2-print_alphabet.c) - A program that prints the alphabet in lowercase, followed by a new line.
   * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * All your code should be in the **main** function
  * You can only use **putchar** twice in your code

3. alphABET - [3-print_alphabets.c](./3-print_alphabets.c) - A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
   * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * All your code should be in the **main** function
  * You can only use **putchar** three times in your code
##
4. When I was having that alphabet soup, I never thought that it would pay off - [4-print_alphabt.c](./4-print_alphabt.c) - A program that prints the alphabet in lowercase, followed by a new line.
   * Print all the letters except **q** and **e**
  * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * All your code should be in the **main** function
  * You can only use **putchar** twice in your code
##
5. Numbers - [5-print_numbers.c](./5-print_numbers.c) - A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
   * All your code should be in the **main** function
##
6. Numberz - [6-print_numberz.c](./6-print_numberz.c) - A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
   * You are not allowed to use any variable of type **char**
  * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * You can only use **putchar** twice in your code
  * All your code should be in the **main** function
##
7. Smile in the mirror - [7-print_tebahpla.c](./7-print_tebahpla.c) - A program that prints the lowercase alphabet in reverse, followed by a new line.
   * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * All your code should be in the **main** function
  * You can only use **putchar** twice in your code
##
8. Hexadecimal - [8-print_base16.c](./8-print_base16.c) - A program that prints all the numbers of base 16 in lowercase, followed by a new line.
  * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * All your code should be in the **main** function
  * You can only use **putchar** three times in your code
##
9. Patience, persistence and perspiration make an unbeatable combination for success - [9-print_comb.c](./9-print_comb.c) - A program that prints all possible combinations of single-digit numbers.
   * Numbers must be separated by **,**, followed by a space
  * Numbers should be printed in ascending order
  * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * All your code should be in the **main** function
  * You can only use **putchar** four times maximum in your code
  * You are not allowed to use any variable of type **char**
##
10. Inventing is a combination of brains and materials. The more brains you use, the less material you need - [100-print_comb3.c](./100-print_comb3.c) - A program that prints all possible different combinations of two digits.
    * Numbers must be separated by **,**, followed by a space
  * The two digits must be different
  * **01** and **10** are considered the same combination of the two digits **0** and **1**
  * Print only the smallest combination of two digits
  * Numbers should be printed in ascending order, with two digits
  * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * You can only use **putchar** five times maximum in your code
  * You are not allowed to use any variable of type **char**
  * All your code should be in the **main** function
##
11. The success combination in business is: Do what you do better... and: do more of what you do... - [101-print_comb4.c](./101-print_comb4.c) - A program that prints all possible different combinations of three digits.
    * Numbers must be separated by ,, followed by a space
  * The three digits must be different
  * **012**, **120**, **102**, **021**, **201**, **210** are considered the same combination of the three digits **0**, **1** and **2**
  * Print only the smallest combination of three digits
  * Numbers should be printed in ascending order, with three digits
  * You can only use the **putchar** function (every other function (**printf**, **puts**, etc…) is forbidden)
  * You can only use **putchar** six times maximum in your code
  * You are not allowed to use any variable of type **char**
  * All your code should be in the **main** function
##
12. Software is eating the World - [102-print_comb5.c](./102-print_comb5.c) - A program that prints all possible combinations of two two-digit numbers.
    * The numbers should range from **0** to **99**
    * The two numbers should be separated by a space
    * All numbers should be printed with two digits. **1** should be printed as **01**
    * The combination of numbers must be separated by comma, followed by a space
    * The combinations of numbers should be printed in ascending order
    * **00 01** and **01 00** are considered as the same combination of the numbers **0** and **1**
    * You can only use the **putchar** function (every other function (**printf**, **puts*    *, etc…) is forbidden)
    * You can only use **putchar** eight times maximum in your code
    * You are not allowed to use any variable of type **char**
    * All your code should be in the **main** function
