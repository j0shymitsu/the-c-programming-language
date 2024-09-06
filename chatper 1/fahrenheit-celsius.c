#include <stdio.h>

/* Print Fahrenheit-Celsius table */

int main(void)
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0;    // Lower limit of temp table.
    upper = 300;    // Upper limit.
    step = 20;    // Step size.

    fahr = lower;

    while (fahr <= upper)
    {
        cels = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr = fahr + step;
    }
}