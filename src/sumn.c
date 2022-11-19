#include "sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn (int n)
{
    /* Pre: Positive integer */
    assert(n > 0);

    /* Base case: */
    if( n == 1 ) {
        return 1;
    }

    /* Recursive step: */
    else {
        return 2 * n - 1 + sumn(n - 1);
    }
}