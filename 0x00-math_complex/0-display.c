#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - function that displays
 * the complex numbers, followed by a new line.
 *
 * @c: structure “complex” where a complex number
 * a + ib is represented by two doubles.
 */

void display_complex_number(complex c)
{
	if (c.im > 0 &&  c.im != 1)
		printf("%g + %gi\n", c.re, c.im);
	else if (c.im == 0)
		printf("%g\n", c.re);
	else if (c.im < 0 && c.im != (-1))
		printf("%g - %gi\n", c.re, (c.im * (-1)));
	else if (c.im == 1)
		printf("%g + i\n", c.re);
	else
		printf("%g - i\n", c.re);
}
