#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int digit = 42;
    printf("The address of digit = %d", &digit);
    printf("\nThe value of digit = %d", *(&digit));
    printf("\nThe value of digit = %d", digit);
    return 0;
}
