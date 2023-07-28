#include "lists.h"
int _length(const char *s);
/**
 * add_node - function that creates and add a new node to the linked list
 * @head: A double pointer to the linked list.
 * @str: the freshly added string to the node.
 * Return: pointer to the newely created node if success
 * or (NULL) in failure.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t length = _length(str);
new_node = malloc(sizeof(list_t));
if (!new_node)
	return (NULL);
new_node->str = strdup(str);
new_node->len = length;
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
/**
 * _length - function that returns the length of a string
 * @s: pointer to the string to be calculated
 * Return: length of the string
 */
int _length(const char *s)
{
int length = 0;
if (s)
{
while (s[length])
{
	length++;
}
}
return (length);
}
