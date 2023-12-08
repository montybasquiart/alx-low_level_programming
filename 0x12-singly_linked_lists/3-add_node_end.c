#include "lists.h"

int len(const char *str);
list_t *create_node(const char *str);
/**
 * add_node_end - a function that adds nodes to the end of the list
 * @head: pointer to the first node
 * @str: the new node added
 * Return: pointer to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;

	temp = *head;
	if (head == NULL)
	{
		return (NULL);
	}
		new_node = create_node(str);
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	return (*head);
}
/**
 * create_node - a function that accepts new nodes
 * @str: string to input in the newly created node
 * Return: the pointer to the malloc'ed memory
 */
list_t *create_node(const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	return (new_node);
}

/**
 * len - calculate the length of a string
 * @str: find the length of this string
 * Return: total amount of length
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
