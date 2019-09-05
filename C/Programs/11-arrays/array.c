#include <stdio.h>

#define SIZE(arr) sizeof(arr)/sizeof(arr[0])


int main()
{
    //Define int array a, which has a length 5
    int a[8]={1,2,3,4,5,6,7,8};
   
    int i=0;
    for (i=0; i< SIZE(a); i++) {
        printf("a[%d] = %d \n",i,a[i]);
    }
    
    int b[8]={1,2,3,4,5,6,7,8};
    
     i=0;
    for (i=0; i< SIZE(b); i++) {
        printf("b[%d] = %d \n",i,a[i]);
    }
    
    return 0;
    
}


