#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    void *pointerVariableName = NULL;
    char c = 'c';
    pointerVariableName = &c;
    printf("Address of %c = %p", c, pointerVariableName);
    int i = 1;
    pointerVariableName = &i;
    printf("\nAddress of %d = %p", i, pointerVariableName);
    double dub = 2.5;
    pointerVariableName = &dub;
    printf("\nAddress of %.2f = %p", dub, pointerVariableName);
    float flt = 3.14;
    pointerVariableName = &flt;
    printf("\nAddress of %.2f = %p", flt, pointerVariableName);
    long lng = 334444444;
    pointerVariableName = &lng;
    printf("\nAddress of %ld = %p", lng, pointerVariableName);

    return 0;
}