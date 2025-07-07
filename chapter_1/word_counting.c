#include <stdio.h>

#define IN 1    // Inside a word
#define OUT 0   // Outside a word

/* Count lines words, and characters in input */

int main (void)
{
    int c, nl, nw, nc, state;    // Declares the variables

    state = OUT;                 // Initialise state to OUT (outside of a word)
    nl = nw = nc = 0;            // Initialise line, word, and char counts

    while((c = getchar()) != EOF)
    {
        nc++;                    // Increment char count

        if (c == '\n')
        {
           nl++;                 // Increment line count
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;         // If space, newline, or tab, set state to OUT
        }

        else if (state == OUT)
        {
            state = IN;         // If previously OUT and now a character, start a word
            nw++;               // Increment word count
        }

    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}