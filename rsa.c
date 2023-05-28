#include "rsa.h"


/**
 * is_prime - check if a number is prime
 * @num: the sample number
 * Return: 1 if number is prime else 0
 */
int is_prime(long int num)
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
int is_even(long int num)
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
void find_factors(long int num)
{
	long int f;

	if (is_prime(num))
	{
		printf("%lu=%lu*%d\n", num, num, 1);
		return;
	}

	if (num > 2)
	{
		if (is_even(num))
		{
			printf("%lu=%lu*%d\n", num, num / 2, 2);
			return;
		}
	}

	f = 3;
	while (f * f <= num)
	{
		if (num % f == 0)
		{
			printf("%lu=%lu*%lu\n", num, num / f, f);
			return;
		}
		else
			f += 2;
	}
}
