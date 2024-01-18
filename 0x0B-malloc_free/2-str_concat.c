#include "main.h"
/**
 * str_concat - funct that concat two string
 * @s1: parameter one.
 * @s2: parameter two.
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
char *newstr;
unsigned int i, j, k;
for (i = 0; s1[i] != '\0'; i++)
{
}
for (j = 0; s2[j] != '\0'; j++)
{
}
newstr = malloc(sizeof(char) * (i + j + 1));
if (!newstr)
{
	free(newstr);
	return (NULL);
}
for (k = 0; k < i; k++)
{
newstr[k] = s1[k];
}
for (k = i; k <= i + j; k++)
{
newstr[k] = s2[k - i];
}
return (newstr);
}
