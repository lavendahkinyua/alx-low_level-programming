#include <stdio.h>
/**
 *main - Entry point
 *prints single digit numbers of base 10
 *Return: Always 0(succcess)
 */
int main(void)
{
int i = 0;
do {
putchar((i % 10) + '0');
i++;
} while (i < 10);
putchar('\n');
return (0);
}
