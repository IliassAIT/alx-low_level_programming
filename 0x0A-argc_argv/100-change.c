#include <stdio.h>
#include <stdlib.h>
/**
 * main - func that gives you the minimum change return
 * @argc: argument count.
 * @argv: argument vector.
 * Return: return (0) success or (1) if failure.
 */
int main(int argc, char *argv[])
{
int number = 0, coin, retcoin = 0, i = 0;
int change[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
coin = atoi(argv[1]);
while (i < 5)
{
number = 0;
if (coin == 0)
{
break;
}
else if (change[i] <= coin)
{
number = coin / change[i];
coin -= number *change[i];
retcoin += number;
}
i++;
}
printf("%d\n", retcoin);
return (0);
}
