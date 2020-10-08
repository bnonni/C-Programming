#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 5;
    int *p = &num;
    printf("Address using %%p = %p", p);
    printf("\nAddress using %%d = %d", p);
    printf("\nAddress using %%o = %o", p);

    return 0;
}