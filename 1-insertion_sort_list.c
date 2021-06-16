#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: pointer of list of integer
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp1 = NULL, *temp2 = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = *list;

	while (current->next != NULL)
	{
		if (current->n > current->next->n)
		{
			temp1 = current->next;
			temp2 = current->prev;
			current->next = temp1->next;
			current->prev = temp1;
			temp1->prev = temp2;
			temp1->next = current;

			if (current->next != NULL)
				current->next->prev = current;

			if (temp2 != NULL)
			{
				temp2->next = temp1;
				current = temp2;
			}
			else
				*list = temp1;

			print_list(*list);
		}
		else
			current = current->next;
	}
}
