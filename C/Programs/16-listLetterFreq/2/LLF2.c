#include <stdio.h>
#define alphabet_len 26

int main()
{
   int c, alphabet[26] = {0}, x;
 
   printf("Enter a string\n");
   
   while ((c = getchar()) != '\n') {
      if (c >= 'a' && c <= 'z')
      {
         c = c - 'a';
         alphabet[c]++;
      }
      else
      {
       c = c - 'A';
       alphabet[c]++;
      }
   }
 
   for (x = 0; x < alphabet_len; x++)
    printf("Letters %c or %c occurs %d times in the string.\n", x + 'a', x + 'A', alphabet[x]);

   return 0;
}