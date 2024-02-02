#include "lists.h"
/**
 * list_len - Function that gives the node elements number
 * @h: is a pointer to a struct meaning the linked list.
 * Return: number of elements (node).
 **/

size_t list_len(const list_t *h)
{
const list_t *temp;
size_t count_node  = 0;
temp = h;
while (temp)
{
	count_node++;
	temp = temp->next;
}
return (count_node);
}
