#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    int *S = (int*)malloc(n * sizeof(int));
    int total;
    S[0] = a;
    S[1] = b;
    S[2] = c;
    S[3] = a + b + c;
    for(int i = (c + 1); i < n; i++){
        S[i] = S[i - 1] + S[i - 2] + S[i - 3];
    }
    return S[n - 1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d\n", ans); 
    return 0;
}