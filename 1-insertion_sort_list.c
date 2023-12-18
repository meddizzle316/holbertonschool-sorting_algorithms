#include "sort.h"
/**
 * sortedInsert - creates a new doubly linked list and adds nodes in order
 * @head: head of list
 * @newNode: newnode to add
 *
 * Return: always void
 */

void sortedInsert(listint_t** head, listint_t* newNode)
{
	listint_t* current;

	if (*head == NULL)
		*head = newNode;
	else if ((*head)->n >= newNode->n)
	{
		newNode->next = *head;
		newNode->next->prev = newNode;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL && current->next->n < newNode->n)
		{
			current = current->next;
		}
		newNode->next = current->next;
		if (current->next != NULL)
		{
			newNode->next->prev = newNode;
		}
		current->next = newNode;
		newNode->prev = current;
	}
}
/**
 * insertion_sort_list - uses insert sort on a list
 * @list: doubly linked list to be sorted
 *
 * Return: always void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t* sorted = NULL;
	listint_t* next = NULL;

	listint_t *current = *list;
	while (current != NULL)
	{
		next = current->next;
		current->prev = current->next = NULL;
		sortedInsert(&sorted, current);
		current = next;
	}
	*list = sorted;
}
