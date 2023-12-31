#include "sort.h"
/**
 * insertion_sort_list - performs insertion sort on doubly linked list
 * @list: header to list
 *
 * Return: always void
 */
void insertion_sort_list(listint_t **list)
{
	int i, temp, j;
	listint_t *current, *back, *next, *prev;

	if (list == NULL || *list == NULL)
		return;
	current = (*list)->next;
	for (i = 1; current != NULL; i++, current = current->next)
	{
		j = i - 1;
		temp = current->n;
		back = current->prev;
		while (j >= 0 && back != NULL && back->n > temp)
		{
			if (back->next->next != NULL)
				back->next->next->prev = back;
			next = back->next->next;
			back->next->prev = back->prev;
			back->next->next = back;
			prev = back->prev;
			if (back->prev != NULL)
				back->prev->next = back->next;
			back->prev = back->next;
			back->next = next;
			back = prev;
			j--;
			if (current->prev == NULL)
				*list = current;
			print_list(*list);
		}
	}
}
