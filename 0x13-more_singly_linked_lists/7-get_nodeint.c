#include "lists.h"
/**
 * get_nodeint_at_index - looks for a particular node in a list
 * @head: pointer to the head of the list
 * @index: the index of the position of the node to be looked
 * for
 * Return: the founded node pointer.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int elem = 0;
if (!head)
	return (NULL);
for (elem = 0; elem < index; elem++)
{
	head = head->next;
	if (head == NULL)
		return (NULL);
}
return (head);
}
