#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to the first element of the list..
 **/
void free_listint(listint_t *head)
{
listint_t *node, *node_2;
node = head;
while (!node)
{
	node_2 = node->next;
	free(node);
	node = node_2;
}
}
