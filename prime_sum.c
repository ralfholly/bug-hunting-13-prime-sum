#include <stdio.h>
#include "prime_table.h"

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main(void) {
    unsigned int sum = 0, i;
    for (i = 0; i < ARRAY_SIZE(PRIME_TABLE); ++i) {
        sum += PRIME_TABLE[i];
    }
    printf("%u\n", sum);
    return 0;
}
