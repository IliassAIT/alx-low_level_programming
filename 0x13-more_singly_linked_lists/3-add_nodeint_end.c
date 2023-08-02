#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * to the end of the list
 * @head: pointer to the head of the node
 * @n: an int to be inserted to the list.
 * Return: pointer to the new node.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *temp_2;
temp = malloc(sizeof(listint_t));
if (!temp)
	return (NULL);
else
{
	temp->n = n;
	temp->next = NULL;
}
if (*head == NULL)
{
	*head = temp;
	return (temp);
}
temp_2 = *head;
while (temp_2->next)
	temp_2 = temp_2->next;
temp_2->next = temp;
return (temp);
}
