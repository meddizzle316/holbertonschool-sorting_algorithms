#ifndef MAIN_H
#define MAIN_H
#define _XOPEN_SOURCE 700
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void bubbleSort(int *array, size_t size);
int _putchar(char c);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif
