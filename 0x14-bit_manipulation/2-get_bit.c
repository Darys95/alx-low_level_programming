#include "main.h"

/**
 * get_bit - For returning the value of a bit at a given index.
 * @n: A number whose bit value to get.
 * @index: An index of the bit to get.
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

/* Check if index is greater than 63 */
if (index > 63)
{
return (-1);
}

/* Right shift n, index times. */
bit_val = (n >> index) & 1;

return (bit_val);
}
