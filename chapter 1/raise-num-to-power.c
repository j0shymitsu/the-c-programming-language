#include <stdio.h>

// NOTE: The standard library contains a function "pow(x, y)" that computes power. This is for demonstration

int power(int m, int n);

/* TEST POWER FUNCTION */
int main(void)
{
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

/* FUNCTION DEFINITION */
int power(int base, int n)    // Parameters are local to function
{
    int p;

    for(p = 1; n > 0; --n)
    {
        p = p * base;
    }

    return p;
}