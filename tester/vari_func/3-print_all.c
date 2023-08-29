#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - like a printf func
 * @format: the format specifier
 */
void print_all(const char * const format, ...)
{
char *for_spe, *argstr;
int i, j;
va_list myprint;
for_spe = malloc(sizeof(format) + 1);
while (format[i])
{
if (format[i] == 'c' || format[i] == 'i'
	|| format[i] == 'f' || format[i] == 's')
{
for_spe[j] = format[i];
j++;
}
i++;
}
for_spe[j++] = '\0';
va_start(myprint, format);
i = 0;
while (i < j)
{
switch (for_spe[i])
{
	case 'c':
		printf("%c", va_arg(myprint, int));
		break;
	case 'i':
		printf("%i", va_arg(myprint, int));
		break;
	case 'f':
		printf("%f", va_arg(myprint, double));
		break;
	case 's':
		argstr = va_arg(myprint, char *);
		printf("%s", argstr ? argstr : "nil");
		break;
}
if (i < j - 2)
	printf(", ");
i++;
}
free(for_spe);
printf("\n");
va_end(myprint);
}
