#include "lists.h"
void ComeFirst(void)__attribute__ ((constructor));

/**
 * ComeFirst - a function that runs before the main function
 * Return: void
 */
void ComeFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
