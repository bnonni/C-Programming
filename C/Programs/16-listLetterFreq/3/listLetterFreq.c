#include <stdio.h>

int main(){
 int c, i, alphabet[26] = {0}, n;
 printf("Enter a string or any block of text:\n");
 scanf("%d", &c);
 while((c = getchar()) != '\n')
 {
  if((c <= 'z' && c >= 'a'))
  {
  
   c =  c - 'a';
    alphabet[c]++; 
  
  }
  else
  {
    c = c - 'A';
    alphabet[c]++;
  }
  }
  n = sizeof(alphabet)/sizeof(alphabet[0]);
 for(i = 0; i < n; i++){
  char lowers = (char)i + 'a';
  char uppers = (char)i + 'A';
  printf("Letter %c or %c appears %d times\n", lowers, uppers, alphabet[i]);
 }
return 0;
}