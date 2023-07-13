#include "main.h"
#include <stdlib.h>
/**
 * strtow - func that changes a 1d string to a 2d array
 * @str: string ti be changed
 * Return: return ptr to the 2d array or null.
 */
char **strtow(char *str)
{
char **final;
int i, r, lens, lenh = 0, rows = 0, j, k = 0;
char *helper;
if (str == NULL || *str == '\0')
	return (NULL);
for (lens = 0; str[lens] != '\0'; lens++)
{
lenh++;
if (str[lens] == ' ')
	lenh--;
}
helper = malloc(sizeof(char) * (lenh + 1));
if (!helper)
	free(helper);
for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] != ' ' && str[i + 1] != ' ')
	{
	helper[j] = str[i];
	j++;
	}
	else if (str[i] != ' ' && str[i + 1] == ' ')
	{
	helper[j] = str[i];
	j++;
	helper[j] = '\0';
	j++;
	rows++;
	}
}
final = malloc(sizeof(char *) * rows);
if (!final)
{
	free(final);
	return (NULL);
}
for (r = 0; r < rows; r++)
{
for (i = 0; helper[i] != '\0'; i++)
;
final[r] = malloc(sizeof(char) * i);
if (final[r] == NULL)
{
	for (r--; r >= 0; r--)
	{
	free(final[r]);
	}
	return (NULL);
}
}
for (r = 0; r < rows; r++)
{
for (j = 0, i = k; i < lenh; i++, j++)
{
final[r][j] = helper[i];
if (helper[i] == '\0')
{
	j = 0;
}
}
k = i;
}
final[r] = NULL;
return (final);
}
