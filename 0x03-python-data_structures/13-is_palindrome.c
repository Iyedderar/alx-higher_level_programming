#include "lists.h"
#include<stdio.h>
/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: A pointer to the head of the linked list.
 *
 * Return: If the linked list is not a palindrome - 0.
 *         If the linked list is a palindrome - 1.
 */
int is_palindrome(listint_t **head)
{
	int list_len = 0, i;
	listint_t *tmp = *head, *v;

	if (*head == NULL || (*head)->next)
		return (1);

	while (tmp != NULL)
	{
		list_len++;
		tmp = tmp->next;
	}
	tmp = *head;
	while (list_len > 1)
	{
		v = *head;
		for (i = 0; i < list_len - 1; i++)
			v = v->next;
		if (tmp->n != v->n)
			return (0);
		list_len--;
		tmp = tmp->next;
	}
	return (1);
}
