#include "lists.h"

int len(const char *str);
/**
 * add_node - add a node to the beginning of the list
 * @head: pointer to the head of the node
 * @str: string to be inserted as the first node
 * Return: pointer to the first node (newly assigned node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - calculate the length of a string
 * @str: the string to geth its length
 * Return: the length of the string
 * Description: singly linked list node structure
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
