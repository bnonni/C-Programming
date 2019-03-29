#include <stdio.h>

int main(){
 printf("%d", bitcount(0));
 return 0;
}
int bitcount(unsigned int x){
int b;
for(b=0; x!=0; x=x>>1) 
        if(x & 01)      /*octal1=000000001*/
        b++;        //
return b;
}