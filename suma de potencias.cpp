#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x, sum;
    for (x = 1; x <= 100; x++) {
        printf("%d\n", x * x);
        sum += x * x;
    }
    printf("%d\n", sum);
    return 0;
}


