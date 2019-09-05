#include <stdio.h>

int main(){
 int c, i, alphabet[26] = {0};

 scanf("%d", &c);
 while((c = getchar()) != '\n')
 {
  if((c <= 'z' && c >= 'a'))
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
 
 for(i = 0; i < 26; i++){
  char lower_case = (char)i + 'a';
  char upper_case = (char)i + 'A';
  printf("Letter %c or %c appears %d times\n", lower_case, upper_case, alphabet[i]);
 }
return 0;
}