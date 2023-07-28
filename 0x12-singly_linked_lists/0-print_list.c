#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints the elements of a linked list
 * @h: pointer of a struct that is the list to be printed
 * Return: Elements to be printed
 */
size_t print_list(const list_t *h)
{
size_t element = 0;
while (h)
{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	element++;
	}
	return (element);
}
