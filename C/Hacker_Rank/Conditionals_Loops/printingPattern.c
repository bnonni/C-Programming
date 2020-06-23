#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
2 -> 3
    => (2 * 2) - 1 = 3 * 3 = 9
5 -> 9
    => (5 * 2) - 1 = 9 * 9 = 81
7 -> 13
    => (7 * 2) - 1 = 13 * 13 = 169
*/

int main() 
{
    int n;
    scanf("%d", &n); 
    int m = (n * 2) - 1;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){ 
            int num = i < j ? i : j;
            num = num < m-i ? num : m-i-1;
            num = num < m-j-1 ? num : m-j-1;
            printf("%d ", n-num);
        }
        printf("\n");
    }
    return 0;
}