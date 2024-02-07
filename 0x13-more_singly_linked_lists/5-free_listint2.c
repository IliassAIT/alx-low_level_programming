#include "lists.h"
/**
 * free_listint2 - function that serves as free to free a list
 * @head: pointer to the first node of the list.
 **/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (!head)
	return;
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
