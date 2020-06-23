#include <stdio.h>
#include <stdlib.h>

/*
Complete the function void update(int *a,int *b), 
which reads two integers as argument, and sets 
with the sum of them, and  with the absolute 
difference of them.

a' = a + b
b' = |a - b|
*/

void update(int *a, int *b) {
    int c = *a, d = *b;
    *a = *a + *b;
    *b = abs(d - c);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}