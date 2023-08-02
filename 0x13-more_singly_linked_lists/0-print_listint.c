#include "lists.h"
/**
 * print_listint - func that prints all the list elements
 * @h: is a pointer to the linked list.
 * Return: number of elements
 **/
size_t print_listint(const listint_t *h)
{
unsigned int count = 0;
const listint_t *temp;
temp = h;
while (temp)
{
	printf("%d\n", temp->n);
	count++;
	temp = temp->next;
}
return (count);
}
