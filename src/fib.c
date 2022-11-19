/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    /* Pre: Positive integer */
    assert(n > 0);

    /* Cases where n < 3 */
    if (n == 1)
        return p;
    if (n == 2)
        return pp;

    /* Recursive step */
    else {
        return fib(n - 1, pp, p + pp);
    }
}
