#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
For each integer  in the interval  (given as input) :

If 1 <= n <= 9, then print the English representation of it in lowercase.
 That is "one" for 1, "two" for 2, and so on.
Else if n > 9 and it is an even number, then print "even".
Else if n > 9 and it is an odd number, then print "odd".
*/

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++){
     int n = i;
     if(1 <= n && n <= 9){
      switch(n){
       case 1:
        printf("%s\n", "one");
        break;
       case 2:
        printf("%s\n", "two");
        break;
       case 3:
        printf("%s\n", "three");
        break;
       case 4:
        printf("%s\n", "four");
        break;
       case 5:
        printf("%s\n", "five");
        break;
       case 6:
        printf("%s\n", "six");
        break;
       case 7:
        printf("%s\n", "seven");
        break;
       case 8:
        printf("%s\n", "eight");
        break;
       case 9:
        printf("%s\n", "nine");
        break;
      }
     }
      else
      {
       if(n % 2 == 0)
       {
        printf("%s\n", "even");
       }
       else
       {
        printf("%s\n", "odd");
       }
     }
}
    
    return 0;
   }
