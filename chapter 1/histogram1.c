#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

/* histogram of word lengths */

int main(void)
{
    int c, i, nc, state;    // characters; loop counter; number of char in word; state (in/out)
    int nchar[5];    // array for histogram

    state = OUT;    // initialise state to OUT
    nc = 0;    // initalise current letter count to zero

    /* initialise elements in array to 0 */
    for (i = 0; i < 5; i++)
    {
        nchar[i] = 0;
    }

    /*  read characters */
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '.' || c == ',')
        {
            if(state == IN)
            {

                if(nc <= 3)
                {
                    ++nchar[0];
                }
                else if(nc <= 8)
                {
                    ++nchar[1];
                }
                else if(nc <= 12)
                {
                    ++nchar[2];
                }
                else if(nc <= 15)
                {
                    ++nchar[3];
                }
                else
                {
                    ++nchar[4];
                }

                state = OUT;
            }

            nc = 0;
        }

        else
        {
            state = IN;
            nc++;
        }
    }

    

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", nchar[i]);
    }

}