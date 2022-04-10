#include <studio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints a random number  and states whether
 *         it is positive, negative, or zero
 *
 * return: Alwayes 0.
 */
int main(void)
{
	int n;
	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if (n > 1)
		printf("%d is positive\n", n);
	else if (n < 0)
                printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);


