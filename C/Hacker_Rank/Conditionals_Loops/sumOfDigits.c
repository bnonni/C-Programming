#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, digits, i, total = 0;
    scanf("%d", &n);
    digits = floor(log10(abs(n))) + 1;
     for(i = 0; i < digits; i++)
     {
     total += n % 10;
      n /= 10;
     }
    printf("%d\n", total);
    return 0;
}