#include "main.h"

/**
 * set_bit - For setting value of a bit to 1 at a given index.
 * @n: The number whose bit to set.
 * @index: An index of the bit to set.
 * Return: 1 for success, -1 for error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int num;

/* Check if index exceeds number of bits in an unsigned long integer. */
if (index > (sizeof(unsigned long) * 8))
{
return (-1);
}

/* Left shift 1, index times. */
num = 1 << index;

/* Set the bit to 1 at the given index. */
*n = *n | num;

return (1);
}
