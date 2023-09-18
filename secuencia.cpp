#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    for (x = 1, y = -1; x <= 100 && y >= -100; x++, y--) 
	{
        printf("%d, ", x);
        printf("%d, ", y);
    }
    return 0;
}

