#include <stdio.h>
#include <stdlib.h>

union student
    {
        char a[10];
        int id;
    }u;
void main()
    {
     printf("%d", sizeof(u));
    }
