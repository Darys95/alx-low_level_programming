#include "main.h"

/**
 * clear_bit - For setting value of a bit to 0 (clearing) at a given index.
 * @index: An index to the bit to clear.
 * @n: A pointer to the number to clear.
 * Return: 1 for success, -1 for error.
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long num_clear;

/* Check if index exceeds number of bits in an unsigned long integer. */
if (index > sizeof(unsigned long) * 8)
{
return (-1);
}

/* Left shift 1, index times. */
num_clear = ~(1 << index);

/* Set the bit to 0 at the given index. */
*n = *n & num_clear;

return (1);
}
