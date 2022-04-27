#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - function that returns the
 * conjugate of a given complex number.
 *
 * @c: structure “complex” where a complex number
 * a + ib is represented by two doubles.
 *
 * Return: complex struct
 */

complex conjugate(complex c)
{

	complex conj;

	conj.re = c.re;
	conj.im = (c.im) * (-1);

	return (conj);
}
