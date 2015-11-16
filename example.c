#include <stdio.h>
#include <stdlib.h>
#include "bsearch.h"

// Example program.
// Input:
// n          - length of array
// a_1 .. a_n - sorted array of integers
// x          - element to search
// Output:
// index of first element, greater than `x`, or -1,
// if there's no such element.
int main()
{
    int n, x;
    scanf("%d", &n);
    int* arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    scanf("%d", &x);

    printf("%d\n", binsearch(arr, n, x));

    free(arr);
    return 0;
}
