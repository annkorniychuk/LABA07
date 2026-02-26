#include <stdio.h>
#include "functions.h"

int main()
{
    double a = 1.0;
    double b = 9.0;
    double h;
    int choice;

    printf("Enter step h: ");
    scanf("%lf", &h);

    printf("1 - for\n2 - while\n3 - do while\nChoose: ");
    scanf("%d", &choice);

    void (*tab_ptr)(double, double, double) = 0;

    if (choice == 1) tab_ptr = tab_for;
    else if (choice == 2) tab_ptr = tab_while;
    else if (choice == 3) tab_ptr = tab_do_while;
    else {
        printf("Wrong option\n");
        return 0;
    }

    tab_ptr(a, b, h);

    return 0;
}
