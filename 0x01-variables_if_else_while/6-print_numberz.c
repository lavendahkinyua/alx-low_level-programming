#include <stdio.h>
/**
 *main - entry point
 *prints single digit numbers of base 10
 *return: 0(succcess)
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
