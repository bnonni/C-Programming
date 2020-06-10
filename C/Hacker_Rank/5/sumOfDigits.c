#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{	
    int n, nDigits, i, t = 0, j = 0, digits[10];
    printf("Enter a number: ");
    scanf("%d", &n);
    nDigits = floor(log10(abs(n))) + 1;
    while(j < nDigits)
    {
     for(i = 0; i < nDigits; i++)
     {
      digits[i] = n % 10;
      n /= 10;
     }
     t += digits[i];
     j++;
    }
    printf("%d\n", t);
    return 0;
}