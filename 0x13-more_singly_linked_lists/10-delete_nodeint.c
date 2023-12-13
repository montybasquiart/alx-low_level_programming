#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: head node of the list
 * @index: index where node is to be deleted
 *
 * Return: Returns 1 if successful deletion or else -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current_node;

	unsigned int current_index = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current_node = *head;
	while (current_node != NULL && current_index < index - 1)
	{
		current_node = current_node->next;
		current_index++;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	temp = current_node->next;
	current_node->next = current_node->next->next;
	free(temp);

	return (1);
}
