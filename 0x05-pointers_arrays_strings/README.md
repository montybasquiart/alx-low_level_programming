# 0x05. C - Pointers, arrays and strings

# A README file describing what each script is doing

# Concepts
_For this project, we expect you to look at these concepts:_

 * [Pointers and arrays](https://intranet.alxswe.com/concepts/60)
 * [Data Structures](https://intranet.alxswe.com/concepts/120)
 * [Struggling with the sandbox? Try this: Using Docker & WSL on your local host](https://intranet.alxswe.com/concepts/100039)

##
# Resources
**Read or watch:**

 * [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
 * [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
 * [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
 * [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

##
0. 98 Battery st. - [0-reset_to_98.c](./0-reset_to_98.c) - A function that takes a pointer to an int as parameter and updates the value it points to to 98.
	* Prototype: void reset_to_98(int *n)*;
##
1. Don't swap horses in crossing a stream - [1-swap.c](./1-swap.c) - A function that swaps the values of two integers.
	* Prototype: void swap_int(int *a, int *b);
##
2. This report, by its very length, defends itself against the risk of being read - [2-strlen.c](./2-strlen.c) - A function that returns the length of a string.
	* Prototype: int _strlen_(char *s)*;
* FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
##
3. I do not fear computers. I fear the lack of them - [3-puts.c](./3-puts.c) - A function that prints a string, followed by a new line, to stdout.
	* Prototype: void _puts_(char *str)*;
* FYI: The standard library provides a similar function: puts. Run man puts to learn more
##
4. I can only go one way. I've not got a reverse gear - [4-print_rev.c](./4-print_rev.c) - A function that prints a string, in reverse, followed by a new line.
	* Prototype: void print_rev(char *s)*;
##
5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes - [5-rev_string.c](./5-rev_string.c) - A function that reverses a string.
	* Prototype: void rev_string(char *s)*;
##
6. Half the lies they tell about me aren't true - [6-puts2.c](/.6-puts2.c) - A function that prints every other character of a string, starting with the first character, followed by a new line.
	* Prototype: void puts2(char *str)*;
##
7. Winning is only half of it. Having fun is the other half - [7-puts_half.c](./7-puts_half.c) - A function that prints half of a string, followed by a new line.
	* Prototype: void puts_half(char *str)*;
	* The function should print the second half of the string
	* If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
##
8. Arrays are not pointers - [8-print_array.c](./8-print_array.c) - A function that prints n elements of an array of integers, followed by a new line.
	* Prototype: void print_array(int *a, int n)*;
	* where n is the number of elements of the array to be printed
	* Numbers must be separated by comma, followed by a space
	* The numbers should be displayed in the same order as they are stored in the array
	* You are allowed to use printf
##
9. strcpy - [9-strcpy.c](./9-strcpy.c) - A function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
	* Return value: the pointer to dest
* FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
##
10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers - [100-atoi.c](./100-atoi.c) - A function that convert a string to an integer.
	* Prototype: int _atoi_(char *s)*;
	* The number in the string can be preceded by an infinite number of characters
	* You need to take into account all the - and + signs before the number
	* If there are no numbers in the string, the function must return 0
	* You are not allowed to use long
	* You are not allowed to declare new variables of “type” array
	* You are not allowed to hard-code special values
	* We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
* FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
##
11. Don't hate the hacker, hate the code - [101-keygen.c](./101-keygen.c) - A program that generates random valid passwords for the program 101-crackme.
	* You are allowed to use the standard library
	* You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
	* man srand, rand, time
	* gdb and objdump can help
