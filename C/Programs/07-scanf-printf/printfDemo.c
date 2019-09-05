/*
Lab 7 - CSC3320
Examples of printf function 
Author: Yuan Long    Date: 10/23/2017
*/
#include<stdio.h>

void main(){
    int i = 123;
    float f = -839.21f;
    char s[10] = "Hello";

    ///////// 1. Flags & Width  /////////
    printf("xx%5dxx\n", i);
    //Explain: Display int i right justified in a five characters space.
    //xx  123
    
    printf("xx%-5dxx\n", i);
    //Explain: Display int i left justified in a five characters space.
    //xx123  xx
    
    printf("xx%dxx\n", i);
    //Explain: Display int i.
    //xx123xx
    
    
    
    char msg[] = "Hello";
    printf("xx%20sxx\n", msg);
    //Explain: Display string msg right justified in a 20 characters space.
    //xx               Helloxx
    printf("xx%-20sxx\n", msg);
    //Explain: Display string msg left justified in a 20 characters space.
    //xxHello               xx
    
    
    ///////// 3. Precision  /////////
    printf("xx%fxx\n", f);
    //The defaul presition is 6 decimal places after the decimal point
    //Explain: Display floating point number f with 6 decimal places after the decimal point.
    //xx-839.210022xx

    
    printf("xx%10.3fxx\n", f);
    //Note that the 10 characters includes the decimal point, and a minus sign if there is one.
    //Explain: Display floating point number f right justified at least in a 10 characters space, with 3 decimal places after the decimal point.
    //xx  -839.210xx
    
    printf("xx%-10.3fxx\n", f);
    //Explain: Display floating point number f left justified at least in a 10 characters space, with 3 decimal places after the decimal point.
    //xx-839.210  xx
    
    printf("xx%-10.0fxx\n", f);
    //Explain: Display floating point number f right justified at least in a 10 characters space, with no decimal places after the decimal point.
    //xx-839      xx
    
    
    //////// Practices /////////
    /*
    
    printf("%6d,%4d",  25, 1234);
    printf("\n");
    
    printf("%.1f",  3.1415926);
    printf("\n");

    printf("%8.1f", 20.253);
    printf("\n");

    printf("%-10.5f", 20.253);
    */

}
