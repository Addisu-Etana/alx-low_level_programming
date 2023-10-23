#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_list;

	int num_br;

	if (!head || !*head)
		return (0);
	num_br = (*head)->n;
	temp_list = (*head)->next;
	free(*head);
	*head = temp_list;
	return (num_br);
}

