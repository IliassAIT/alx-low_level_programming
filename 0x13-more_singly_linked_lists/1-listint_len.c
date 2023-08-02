#include "lists.h"
/**
 * listint_len - function that returns the number of elements of a list
 * @h: is the pointer to the list.
 * Return: the count (int).
 **/
size_t listint_len(const listint_t *h)
{
const listint_t *temp;
unsigned int count = 0;
temp = h;
while (temp)
{
	count++;
	temp = temp->next;
}
return (count);
}
