#include <stdio.h>
#include "holberton.h"
/**
* flip_bits - function that returns the number of bits you would need to
* flip to get from one number to another.
*@n: 1st number
*@m: 2nd number
* Return: Always 0.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, flipped;

	if (n == 0 && m == 0)
	{
		return (0);
	}
	else
	{
		/*get the bit number that contain the flipped bites*/
		/*using the XOR operand*/
		flipped = n ^ m;
		if (flipped == 0)
			return (count);
		/**
		* while (flipped > 0)
		* {
		*	count++;
		*	flipped = flipped & (flipped - 1);
		*
		*	[ flipped - 1 ] : delete the first bit seted (the first 1 bit)
		*	[ flipped & (flipped - 1) ] this comparation will return
		*	the flipped number without that first bit (= 1)
		*	and so on until the all bits that constitute the filpped bit number == 0
		* }
		*/
		/* count set bits of the result = flipped bit number */
		/* e.g : flipped = 0101001 --> 3*/
		while (flipped > 0)
		{
			count += flipped & 1;
			flipped >>= 1;
		}
		return (count);
	}
}
		/**
		* this methos is more simple
		* it start to comapre the LSB of the flipped bit number
		* with 1 and shift right the whole number
		* e.g : flipped = 10110110
		* LSB = 0
		* now compare with 1 if you found 1 add 1 to count if not add 0.
		* flipped >> 1 = 01011011 : our new flipped number
		* now LSB = 1
		* until the flipped number becomes
		* 000000000000...... according to the bit number size(8 bits / 32bits ...)
		*/
