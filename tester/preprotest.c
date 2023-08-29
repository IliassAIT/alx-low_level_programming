#include <stdio.h>
#define MACROS 1
/**
 * main - Entry point
 * Return: return (0) success
 */
int main(void)
{
#ifdef MACROS
printf("date is = %s\n", __DATE__);
printf("time is = %s\n", __TIME__);
printf("file is = %s\n", __FILE__);
printf("line is = %d\n", __LINE__);
printf("ANSI is = %d\n", __STDC__);
#endif
return (0);
}
