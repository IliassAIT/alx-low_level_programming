#include <stdio.h>
#include "main.h"
/**
 * main - Func that prints the prog name
 * @argc: Arguments count
 * @argv: Arguments vector which is an array of pointers
 * Return: return (0) success
 */
int main(int argc __attribute__((__unused__)), char* argv[])
{
printf("%s\n", *argv);
return (0);
}
