#include "rsa.h"


/**
 * is_prime - check if a number is prime
 * @num: the sample number
 * Return: 1 if number is prime else 0
 */
int is_prime(unsigned int num)
{
	int i;

	if (num <= 1)
		return (0); /*not prime*/

	for (i = 2; i * i <= num; i++)
		if (num % i == 0)
			return (0); /*not prime*/

	return (1);
}

/**
 * is_even - check if number is even
 * @num: the sample number
 * Return: 1 if number is even else 0
 */
int is_even(unsigned int num)
{
	if (num <= 1)
		return (0);

	if (num % 2 != 0)
		return (0);

	return (1);
}

/**
 * find_factors - find the factors of a given number
 * @num: the number
 * Return: Nothing
 */
void find_factors(unsigned int num)
{
	if (is_prime(num))
		printf("%u=%u*%u\n", num, num, 1);

	if (num > 2)
		if (is_even(num))
			printf("%u=%u*%u\n", num, num / 2, 2);
}
