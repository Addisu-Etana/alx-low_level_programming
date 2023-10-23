#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	listint_t *temp_list = head;

	while (temp_list && x < index)
	{
		temp_list = temp_list->next;
		x++;
	}
	return (temp_list ? temp_list : NULL);
}

