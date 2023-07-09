#include <stdio.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
int strlen_recursion(char *s)
{
if (*s != '\0')
	return (1 + strlen_recursion(s + 1));
else
	return (0);
}
char strrev_recur(char *a, char *b)
{
if (*a != '\0')
{
strrev_recur(a + 1, b);
*b = *a;
}
return (b);
}
/**
 * palin_supp
 *
 *
 *
 */
int palin_supp(char *a, int n)
{
if (n < 1)
{
return (1);
}
if (*a == *(a + l))
{
return (palin_supp(a + 1, n - 2));
}
return (0);
}
/**
 *
 *
 *
 */
int is_palindrome(char *s)
{
int n = strrev_recur(s);
return(palin_supp(s, n - 1));
}
