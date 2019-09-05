#include<stdio.h>

void main(){
    int a[2],*p,x=0;
    
    a[0]=1;
    a[1]=2;
    p=&a[0];
    x=*p++;
    printf("x=%d\t a[0]=%d\t a[1]=%d\t p=%s\t\n",x, a[0],a[1],(p==&a[0])?"&a[0]":"&a[1]");
    
    a[0]=1;
    a[1]=2;
    p=&a[0];
    x=(*p)++;
    printf("x=%d\t a[0]=%d\t a[1]=%d\t p=%s\t\n",x, a[0],a[1],(p==&a[0])?"&a[0]":"&a[1]");
    
    a[0]=1;
    a[1]=2;
    p=&a[0];
    x=*++p;
    printf("x=%d\t a[0]=%d\t a[1]=%d\t p=%s\t\n",x, a[0],a[1],(p==&a[0])?"&a[0]":"&a[1]");
    
    a[0]=1;
    a[1]=2;
    p=&a[0];
    x=++*p;
    printf("x=%d\t a[0]=%d\t a[1]=%d\t p=%s\t\n",x, a[0],a[1],(p==&a[0])?"&a[0]":"&a[1]");
    
}
