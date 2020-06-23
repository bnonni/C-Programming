#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b; float c, d;
	scanf("%d", &a);
    scanf("%d", &b);
    int intSum = a + b;
    int intDiff = a - b;
    printf("%d %d\n", intSum, intDiff);
    
    scanf("%f", &c);
    scanf("%f", &d);
    float floatSum = c + d;
    float floatDiff = c - d;
    printf("%.1f %.1f", floatSum, floatDiff);

    return 0;
}