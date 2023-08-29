#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Return: return (0) success
 */
int main(void)
{
char *ptr;
int len;
char str[] = "hello, everybody";
len = strlen(str);
ptr = malloc(sizeof(char) * len);
strcpy(ptr, str);
printf("%s\n", ptr);
free(ptr);
return (0);
}
