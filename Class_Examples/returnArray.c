/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int* createArray(int n){
    int i=0;
    int *p;
    p=malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        p[i]=i;
    }
    return p;
}

void printArray(int *p, int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", p[i]);
    }
}
int main()
{
    printf("Hello World");
    printArray(createArray(10),10);
    return 0;
}


