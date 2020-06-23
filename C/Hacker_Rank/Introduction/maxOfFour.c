#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int high = 0;
    int arr[16] = {a, b, c, d};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < arrLen; i++){
        if (arr[i] > high){
            high = arr[i];
        }
    }
    
    return high;
}