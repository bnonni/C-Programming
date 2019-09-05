#include <stdio.h>
typedef enum {RED, GREEN, BLUE} COLOR;

int main()
{
    COLOR cl = GREEN;
    printf("The value stored in GREEN is %d", cl);
    return 0;
}