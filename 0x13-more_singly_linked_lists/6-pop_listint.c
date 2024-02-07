#include "lists.h"
/**
 * pop_listint - function that is used to delete
 * the first node (or head node)
 * @head: is the pointer to the head of the list.
 * Return: returns 0 if its empty or an int if not
 **/
int pop_listint(listint_t **head)
{
int headelements;
listint_t *temp;
if (*head == NULL)
	return (0);
temp = *head;
*head = temp->next;
headelements = temp->n;
free(temp);
return (headelements);
}
