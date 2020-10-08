#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int digit = 42;
    int *addressOfDigit = &digit;
    printf("The address of digit = %p", addressOfDigit);
    printf("\nThe value of digit = %d", *addressOfDigit);

    return 0;
}
