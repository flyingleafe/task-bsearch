#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include "bsearch.h"

#define MAX_LEN 100000
#define TESTS_NUM 1000

int test[MAX_LEN];

int generate() {
    int len = rand() % (MAX_LEN - 100 + 1) + 100;
    for (int i = 0; i < len; i++) {
        test[i] = rand() % 2000000 - 1000000;
    }
    std::sort(test, test + len);
    return len;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));

    printf("Test started\n");

    for (int i = 0; i < TESTS_NUM; i++) {
        int val = rand() % 2500000 - 1000000;
        int len = generate();

        int* upbound = std::upper_bound(test, test + len, val);
        int index = binsearch(test, len, val);

        int ans = upbound == test + len ? -1 : upbound - test;

        if (ans != index) {
            printf("FAILED: expected %d, got %d\n", ans, index);
            return 1;
        }
        printf(".");
        fflush(stdout);
    }

    printf("\nOK\n");
    return 0;
}
