#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    void *pointer = NULL;
    int number = 54;
    char alphabet = 'z';
    pointer = &number;
    // printf("The value of number = ", *pointer); /* Compilation Error */
    printf("The value of number = %d", *(int *)pointer); /* prints "The value at number = 54" */
    pointer = &alphabet;
    // printf("The value of alphabet = ", *pointer); /* Compilation Error */
    printf("\nThe value of alphabet = %c", *(char *)pointer); /* prints "The value at alphabet = z */
    return 0;
}