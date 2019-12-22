#include <stdio.h>
#include "arrayUtil.h"

void getMax(int a[], int n, int *max, int *maxIndex){
    *max=0;
    *maxIndex=0;
    
    int i=0;
    for (i = 0; i < n; i++) {
        if(*max < a[i]){
            *max = a[i];
            *maxIndex = i;
        }
    }
    
}
