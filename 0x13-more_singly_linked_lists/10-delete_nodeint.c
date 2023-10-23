#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_list = *head;

	listint_t *current = NULL;

	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_list);
		return (1);
	}
	while (x < index - 1)
	{
		if (!temp_list || !(temp_list->next))
			return (-1);
		temp_list = temp_list->next;
		x++;
	}
	current = temp_list->next;
	temp_list->next = current->next;
	free(current);
	return (1);
}


