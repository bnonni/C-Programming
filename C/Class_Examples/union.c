#include <stdio.h>

union{
   int    i;
   float  f;
} u ;

struct {
   int    i;
   float  f;
} s ;


int main()
{
    u.i = 1;
    u.f = 4;
    printf("u.i = %d\n",u.i);
    
    s.i = 1;
    s.f = 4;
    printf("s.i = %d\n",s.i);
    
    printf("sizeof(u) = %d\n",sizeof(u));
    printf("sizeof(s) = %d\n",sizeof(s));


    return 0;
}

// public static boolean isAllVowels(String s) {
//         int i = 0;
//          for ( ; i< s.length(); i++){
//                  if(!isVowel(s.charAt(i)))
//             return false;
//             }
//         
//         return true;
// }

// public static boolean isVowel(char ch){
//     switch(ch){
//                         case 'a':
//                         case 'e':
//                         case 'i':
//                         case 'o':
//                         case 'u':
//                         case 'A':
//                         case 'E':
//                         case 'I':
//                         case 'O':
//                         case 'U':  return true;
//                         default :  return false;  
//                 }
// }

