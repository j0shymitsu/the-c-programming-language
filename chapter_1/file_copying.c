#include <stdio.h>


// // Copy to output; 1st version
// int main (void)
// {
//     int c;
//     c = getchar();

//     while(c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }

//     return 0;
// }


// Copy to output; 2nd version
int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        printf("%d", EOF);
    }

    return 0;
}

