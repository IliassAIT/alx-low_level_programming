#include "main.h"
/**
 * _strdup - func that duplicates a string
 * @str: str to be duplicated
 * Return: return (ptr) to the new string or NULL
 */
char *_strdup(char *str)
{
char *dup;
int i, j;
if (!str)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
}
dup = malloc(sizeof(char) * (i + 1));
if (!dup)
	return (NULL);
for (j = 0; j <= i; j++)
{
dup[j] = str[j];
}
return (dup);
}
