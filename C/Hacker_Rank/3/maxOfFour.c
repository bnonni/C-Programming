#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
 int i, arr[4] = {a, b, c, d}, temp;
 for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
  if(arr[i] > temp){
   temp = arr[i];
  }
 }
 return temp;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
   
    return 0;
}
