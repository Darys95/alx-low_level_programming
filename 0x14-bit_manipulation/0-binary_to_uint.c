#include "main.h"

/**
 * binary_to_uint - For converting a binary number to an unsigned integer.
 * @b: The string containing the binary number to be converted.
 * Return: A decimal equivalent of the binary number as an unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
int count;
unsigned int decimal_value = 0;

/* Return 0 if b is NULL */
if (!b)
{
return (0);
}

for (count = 0; b[count]; count++)
{
/* Return 0 if b contains a character that is not 0 or 1. */
if (b[count] < '0' || b[count] > '1')
{
return (0);
}

/* Convert binary to decimal. */
decimal_value = 2 * decimal_value + (b[count] - '0');
}

/* Return the converted number. */
return (decimal_value);
}
