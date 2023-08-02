#include "lists.h"
/**
 * sum_listint - function that sums the elements of the nodes
 * in a list
 * @head: pointer to the head node of a particular list.
 * Return: an int which is the total or the sum.
 **/
int sum_listint(listint_t *head)
{
int sum = 0;
while (!head)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
