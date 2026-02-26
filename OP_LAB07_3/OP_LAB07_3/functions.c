#include <stdio.h>
#include "functions.h"

void process(int n)
{
    if (n == 0)
        return;

    int x;
    printf("Enter number: ");
    scanf_s("%d", &x);

    printf("%d %% 3 = %d\n", x, x % 3);

    process(n - 1);
}
