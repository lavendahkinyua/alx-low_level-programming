#include <stdio.h>
/**
 *main -entry point
 *prints all single numbers of base 10
 *return; 0(success)
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
