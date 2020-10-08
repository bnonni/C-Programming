#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *alphabetAddress; /* uninitialised or wild pointer */
    char alphabet = 'a';
    alphabetAddress = &alphabet; /* now, not a wild pointer */
    
    printf("Address using %%p = %p", alphabetAddress);
    return 0;
}