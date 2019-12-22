#include<stdio.h>
void swap(int *p, int *q);
main(){
    int x = 1, y = 2;
    swap(&x, &y);
    
   // swap(x,y);
    printf("x= %d , y= %d\n",x,y);
}

//void swap(int p, int q){
//    int temp=0;
//    temp = p;
//    p = q;
//    sq = temp;
//}

void swap(int *p, int *q){
    int temp=0;
    temp = *p;
    *p = *q;
    *q = temp;
}

