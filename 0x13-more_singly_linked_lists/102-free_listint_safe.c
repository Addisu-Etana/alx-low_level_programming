#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;

	int diff_free;

	listint_t *temp_list;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff_free = *h - (*h)->next;
		if (diff_free > 0)
		{
			temp_list = (*h)->next;
			free(*h);
			*h = temp_list;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
