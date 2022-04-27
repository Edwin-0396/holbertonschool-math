#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number
 * 
 * @c:  
 */

void display_complex_number(complex c)
{
	if (c.re != 0 && c.im != 0)
		printf("%d + %di\n", c.re, c.im);
	if (c.re != 0 && c.im == 0)
		printf("%d\n", c.re);
	if (c.re == 0 && c.im != 0)
		printf("%di\n",c.im);
	
}
