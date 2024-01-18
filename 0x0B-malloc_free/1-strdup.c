#include "main.h"
/**
 * _strdup - function that duplcates a string
 * @str: string to be duplicated
 * Return: return (newstr) newely duplicated and created string
 */
char *_strdup(char *str)
{
char *newstr;
unsigned int i, j;
if (!str)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
}
newstr = malloc(sizeof(char) * (i + 1));
if (!newstr)
{
	free(newstr);
	return (NULL);
}
for (j = 0; j <= i; j++)
{
	newstr[j] = str[j];
}
return (newstr);
}
