#include <stdio.h>
/**
 *main - Entry point
 *prints all single numbers of base 10
 *Return; Always 0(success)
 */
int main(void)
{
int i = 0;
do {
printf("%d", i);
i++;
} while (i < 10);
printf("\n");
return (0);
}
