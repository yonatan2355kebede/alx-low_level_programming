#include <studio.h>

 /** Main - Entery point
 *
 *Discription: print lower and upper alphabet on the same line
 *Return:0
 */
int main(void)
{
        int n;
        for(n=0;n<26;++n)
                putchar('a'+n);
	for(n=0;n<26;++n)
		putchar('A'+n)
                putchar("\n");
        return (0);
}

