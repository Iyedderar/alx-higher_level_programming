#include "lists.h"
/**
 * check_cycle - prints all elements of a listint_t list
 * @list: pointer to head of list
 * Return: 1 if there is cycle 0otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *hare = list->next;
	listint_t *tortoise = list;

	while (hare != NULL)
	{
		if (hare == tortoise)
			return (1);
		if (hare->next == NULL)
			break;
		hare = hare->next->next;
		tortoise = tortoise->next;
	}
	return (0);
}
