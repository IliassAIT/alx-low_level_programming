#include "main.h"
/**
 * argstostr - func that concatenates the args given
 * @ac: arg count.
 * @av: arg vector.
 * Return: return (0) success
 */
char *argstostr(int ac, char **av)
{
int i, r, c;
int len = 0;
char *conc;
if (ac == 0 || av == NULL)
	return (NULL);
for (r = 0; r < ac; r++)
{
if (!av[r])
{
	return (NULL);
}
for (c = 0; av[r][c] != '\0'; c++)
{
len++;
}
len++;
}
conc = malloc(sizeof(char) * (len + 1));
if (!conc)
{
	free(conc);
	return (NULL);
}
for (i = 0, r = 0; r < ac; i++, r++)
{
	for (c = 0; av[r][c] != '\0'; c++)
	{
	conc[i] = av[r][c];
	i++;
	}
}
for (i = 0; i < len; i++)
{
if (conc[i] == '\0')
	conc[i] = '\n';
}
conc[len] = '\0';
return (conc);
}
