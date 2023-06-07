#include "main.h"

/**
 *evaluate_num - recursion loop
 *@n: number
 *@p: number to check
 *Return: return 1 or 0
 */

int evaluate_n(int n, int p)
{

if (p == n - 1)
{
return (1);
}

else if (n % p == 0)
{
return (0);
}

if (n % p != 0)
{
return (evaluate_n(n, p + 1));
}

return (0);

}

/**
 *is_prime_number - evaluate prime or not
 *@n: number
 *Return: return 1 prime - return 0 otherwise
 */

int is_prime_number(int n)
{

int p;

p = 2;

/* only greater than 2*/
if (n < 2)
{
return (0);
}

if (n == 2)
{
return (1);
}

return (evaluate_num(n, p));
}
