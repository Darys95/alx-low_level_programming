#include "main.h"

/**
 * print_binary - For printing the binary representation of a decimal number
 * @n: A decimal number to print in binary.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
int index = 63;
int count = 0;
unsigned long int current;

for (; index >= 0; index--)
{
current = n >> index;

if (current & 1)
{
_putchar('1');
count++;
}

else if (count)
{
_putchar('0');
}
}

if (!count)
{
_putchar('0');
}

}
