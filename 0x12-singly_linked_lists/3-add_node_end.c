#include "lists.h"
/**
 * _length - function that returns the length of a string
 * @s: pointer to the string to be calculated
 * Return: length of the string
 */
int _length(const char *s)
{
size_t length;
while (s[length])
{
	length++;
}
return (length);
}
/**
 * add_node_end - created and add to the end of the linked list a node
 * @head: pointer to the pointer to the first node.
 * @str: pointer to the char to be added.
 * Return: pointer to the newely added nodee.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp_node;
new_node = malloc(sizeof(list_t));
if (!new_node)
	return (NULL);
new_node->str = strdup(str);
new_node->len = _length(str);
new_node->next = NULL;
if (!(*head))
	*head = new_node;
else
{
	temp_node = *head;
	while (temp_node->next)
		temp_node = temp_node->next;
	{
		temp_node->next = new_node;
	}
}
return (new_node);
}
