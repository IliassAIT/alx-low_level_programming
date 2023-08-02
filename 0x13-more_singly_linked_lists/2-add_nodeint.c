#include "lists.h"
/**
 * add_nodeint - function that adds a new node to the first ele.
 * @head: pointer to the node
 * @n: the int to be added to the node
 * Return: pointer to the newely created node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (!tp)
	return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (*head);
}
