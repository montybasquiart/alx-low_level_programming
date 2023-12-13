#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - finds a loop in a list
 * @head: head of the list
 *
 * Description: Uses floyd's hara and tortoise algorithm
 * Return: Returns the address at which the loop starts
 * returns null if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (slow);
	}
	return (NULL);
}
