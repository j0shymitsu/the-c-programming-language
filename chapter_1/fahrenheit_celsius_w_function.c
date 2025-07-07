#include <stdio.h>

float temp(float f);

int main (void)
{
    int i;    // Counter, steps

    for(i = 0; i <= 300; i=i+20)
    {
        printf("%d %.2f\n", i, temp(i));
    }
}

/* FUNCTION DEFINITION */
float temp(float fahr)
{   
    float cels;

    cels = (5.0/9.0) * (fahr-32.0);

    return cels;

}