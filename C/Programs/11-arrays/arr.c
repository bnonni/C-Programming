#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
int arr[N],i,j;
size_t t;
srand((unsigned) time(&t));
for(i=0;i<N;i++)
 arr[i] = rand();
for(j=0;j<N;j++)
 printf("%d", arr[i] % 50);
return 0;
}