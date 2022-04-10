#include <studlib.h>
#include <time.h>
#include <studio.h>
/**
 * main - Entery point
 *
 * Discription: print a number and it's last digit along with whether its
 * last diigit is 0, greater than 5,or less than 6 and not 0.
 * Return:0
 */
int main(void)
{
	int n;
	srand(time(0));
	n= rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d %s\b", n, ,n % 10,
			((n % 10) == 0) ? "and is 0"
			: (((n % 10) > 5) ? "And is gerater than 5"
				:"and is less than 6 and not 0"));
	return (0);
}
