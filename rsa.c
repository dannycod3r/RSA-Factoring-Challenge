#include "rsa.h"


/**
 * is_prime - check if a number is prime
 * @num: the sample number
 * Return: 1 if number is prime else 0
 */
int is_prime(unsigned long long int num)
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
int is_even(unsigned long long int num)
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
void find_factors(unsigned long long int num)
{
	unsigned long long int f;

	if (is_prime(num))
	{
		printf("%llu=%llu*%d\n", num, num, 1);
		return;
	}

	if (num > 2)
	{
		if (is_even(num))
		{
			printf("%llu=%llu*%d\n", num, num / 2, 2);
			return;
		}
	}

	f = 3;
	while (f * f <= num)
	{
		if (num % f == 0)
		{
			printf("%llu=%llu*%llu\n", num, num / f, f);
			return;
		}
		else
			f += 2;
	}
}

/**
 * find_factors2 - find the prime factors of a given number
 * @num: the number
 * Return: Nothing
 */
void find_factors2(unsigned long long int num)
{
	unsigned long long int f = 2;
	int found = 0;

	while (f * f <= num)
	{
		if (num % f == 0)
		{
			if (is_prime(f) && is_prime(num / f))
			{
				printf("%llu=%llu*%llu\n", num, num / f, f);
				found = 1;
				break;
			}
		}
		f++;
	}

	if (f * f > num && is_prime(num))
	{
		printf("%llu=%llu*%d\n", num, num, 1);
	}
}
