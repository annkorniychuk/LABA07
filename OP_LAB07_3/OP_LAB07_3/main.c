#include <stdio.h>
#include "functions.h"

int main()
{
    int n;
    printf("Enter count:\n");

    scanf_s("%d", &n);

    process(n);
    return 0;
}
