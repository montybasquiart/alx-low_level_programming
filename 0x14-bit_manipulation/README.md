# 0x14-bit_manipulation

## A README file describing what each script is doing
##
# Resources
_Read or watch:_

 * [Operators in C - Part 6](https://www.youtube.com/watch?feature=shared&v=egUyaWtsQc0)
 * [Operators in C - Part 7 (Bitwise Operators-II)](https://www.youtube.com/watch?feature=shared&v=LP0acaj3ZLE)
 * [Bitwise Operators 1: The AND Operation](https://www.youtube.com/watch?feature=shared&v=bizj3dle8Qc)
 * [Bitwise Operators 2: The OR Operation](https://www.youtube.com/watch?feature=shared&v=TMFnWGJEJuI)
 * [Bitwise Operators 3: The XOR Operation](https://www.youtube.com/watch?feature=shared&v=O9VELMn3jIY)
 * [Bitwise Operators 4: The Logical Shift Operation](https://www.youtube.com/watch?feature=shared&v=mjqswwqE1RQ)
 * [Bit Manipulation](https://pebble.gitbooks.io/learning-c-with-pebble/content/chapter12.html)
 * [Bitwise Operators](https://www.programiz.com/c-programming/bitwise-operators)
 * [Google](https://www.google.com/webhp?q=bit+manipulation+C)
 * [Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)
##

# Tasks
##

0. 0 - [0-binary_to_uint.c](./0-binary_to_uint.c) - A function that converts a binary number to an unsigned int.
	* Prototype: unsigned int binary_to_uint(const char *b)*;
	* where b is pointing to a string of 0 and 1 chars
	* Return: the converted number, or 0 if
		* there is one or more chars in the string b that is not 0 or 1
		* b is NULL
##
1. 1 - [1-print_binary.c](./1-print_binary.c) - A function that prints the binary representation of a number.
	* Prototype: void print_binary(unsigned long int n);
	* Format: see example
	* You are not allowed to use arrays
	* You are not allowed to use malloc
	* You are not allowed to use the % or / operators
##
2. 10 - [2-get_bit.c](./2-get_bit.c) - A function that returns the value of a bit at a given index.
	* Prototype: int get_bit(unsigned long int n, unsigned int index);
	* where index is the index, starting from 0 of the bit you want to get
	* Returns: the value of the bit at index index or -1 if an error occured
##
3. 11 - [3-set_bit.c](./3-set_bit.c) - A function that sets the value of a bit to 1 at a given index.
	* Prototype: int set_bit(unsigned long int *n, unsigned int index)*;
	* where index is the index, starting from 0 of the bit you want to set
	* Returns: 1 if it worked, or -1 if an error occurred
##
4. 100 - [4-clear_bit.c](./4-clear_bit.c) - A function that sets the value of a bit to 0 at a given index.
	* Prototype: int clear_bit(unsigned long int *n, unsigned int index)*;
	* where index is the index, starting from 0 of the bit you want to set
	* Returns: 1 if it worked, or -1 if an error occurred
##
5. 101 - [5-flip_bits.c](./5-flip_bits.c) - A function that returns the number of bits you would need to flip to get from one number to another.
	* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
	* You are not allowed to use the % or / operators
##
6. Endianness - [100-get_endianness.c](./100-get_endianness.c) - A function that checks the endianness.
	* Prototype: int get_endianness(void);
	* Returns: 0 if big endian, 1 if little endian
##
7. Crackme3 - [101-password](./101-password) - Find the password for [this program](https://github.com/alx-tools/0x13.c).
	* Save the password in the file 101-password
	* Your file should contain the exact password, no new line, no extra space
