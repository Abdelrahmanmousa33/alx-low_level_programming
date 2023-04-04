#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if the number is prime or not
 * @n:the number
 * @i: to use in get_prime
 * Return: 1 if prime 0 otherwise
 */
int get_prime(int n, int i);
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}
/**
 * get_prime - checks if number is prime
 * @n: the number
 * @i: to divide the number
 * Return: 1 if prime 0 if not
 */
int get_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (get_prime(n, i - 1));
}
