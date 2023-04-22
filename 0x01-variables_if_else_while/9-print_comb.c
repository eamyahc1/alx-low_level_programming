#include<stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)

{
int number;


for (number = 48; number <= 57; number++)
{
putchar(number);

if (number == 57)
{
break;
}

putchar(',');
putchar (' ');
}

putchar('\n');

return (0);

}
