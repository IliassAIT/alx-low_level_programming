#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 * @n: the cap of the 2nd string to be concatenated.
 * Return: return ptr to the newely created string or (NULL) if failed?
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, len1, len2, cap;
char *conc;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
cap = n;
for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;
if (n >= len2)
	cap = len2;
conc = malloc(sizeof(char) * (len1 + cap + 1));
if (!conc)
{
	free(conc);
	return (NULL);
}
for (i = 0; i < len1; i++)
{
	conc[i] = s1[i];
}
for (j = 0; j < cap; j++)
{
	conc[i + j] = s2[j];
}
conc[len1 + cap] = '\0';
return (conc);
}
