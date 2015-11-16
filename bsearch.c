#include <stdio.h>
#include "bsearch.h"

// Binary search. Returns index of first element in array,
// greater than `x`, or -1, if there is no such element.
//
// Name `binsearch` used instead of `bsearch` to avoid
// collision with stdlib's function `bsearch`
int binsearch(const int *arr, int len, int x)
{
    int l = 0, r = len;

    while (l < r) {
        int d = l + (r - l) / 2;
        if (x >= arr[d]) {
            l = d + 1;
        } else {
            r = d;
        }
    }

    if (l >= len) {
        l = -1;
    }
    return l;
}
