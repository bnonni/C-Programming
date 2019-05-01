#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char a[10];
    int id;
}s;

void main()
{
    printf("%d", sizeof(s));
}
