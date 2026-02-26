#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

#define SIZE 100000

int main()
{
    int* a = malloc(SIZE * sizeof(int));
    int* b = malloc(SIZE * sizeof(int));

    if (!a || !b) {
        printf("Memory allocation failed\n");
        return 1;
    }

    srand(time(NULL));
    for (long i = 0; i < SIZE; i++) {
        int v = rand();
        a[i] = v;
        b[i] = v;
    }

    clock_t c1 = clock();
    qs_sort(a, 0, SIZE - 1);
    clock_t c2 = clock();

    clock_t c3 = clock();
    bubble_sort_desc(b, SIZE);
    clock_t c4 = clock();

    double qs_time = (double)(c2 - c1) * 1000.0 / CLOCKS_PER_SEC;
    double bs_time = (double)(c4 - c3) * 1000.0 / CLOCKS_PER_SEC;

    printf("QuickSort ascending sorted: %s\n", is_sorted_asc(a, SIZE) ? "WOW" : "NO");
    printf("Bubble sort descending sorted: %s\n", is_sorted_desc(b, SIZE) ? "YES" : "NO");
    printf("Arrays identical before sorting: YES\n");

    printf("QuickSort time: %.3f ms\n", qs_time);
    printf("BubbleSort time: %.3f ms\n", bs_time);

    free(a);
    free(b);
    return 0;
}

//вставляєш тіпа код РТФ я просто шо небудь зміню для прикладу
