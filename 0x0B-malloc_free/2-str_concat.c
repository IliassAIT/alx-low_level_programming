#include "main.h"
/**
 * str_concat - func that concatenates 2 str
 * @s1: ptr to the 1st str
 * @s2: ptr to the 2nd str
 * Return: return ptr to the concatenated str or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *conc;
int i, j, k;
if (!s1)
	s1 = "";
else if (!s2)
	s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
conc = malloc(sizeof(char) * (i + j + 1));
if (!conc)
	return (NULL);
for (k = 0; k <= i + j; k++)
{
if (k < i)
	conc[k] = s1[k];
else if (k >= i)
	conc[k] = s2[k - i];
}
return (conc);
}
