#include <stdio.h>


// // Count characters in input; 1st version
// int main (void)
// {
//     long nc;

//     nc = 0;

//     while(getchar() != EOF)
//     {
//         nc++;
//     }

//     printf("%ld\n", nc);
// }


// Count characters in input; 2nd version
int main (void)
{
    double nc;
    for (nc = 0; getchar() != EOF; nc++);    // Null statement.
    printf("%.0f\n", nc);
}