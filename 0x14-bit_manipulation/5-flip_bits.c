#include "main.h"

/**
 * flip_bits - For returning the number of bits you would need to flip to get
 * from one number to another.
 * @n: First integer.
 * @m: Second integer.
 * Return: Number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int index = 63;
int i = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

/* Loop through each bit of the exclusive OR result. */
for (; index >= 0; index--)
{
current = exclusive >> index;

/* If the current bit is 1, increment count. */
if (current & 1)
{
i++;
}
}

return (i);
}
