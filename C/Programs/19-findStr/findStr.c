#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORD_LEN 20

int main()
{
 char word[WORD_LEN+1], smallest_word[WORD_LEN+1], largest_word[WORD_LEN+1];
 int n = 0;

 printf("Enter Word: ");
 scanf("%s", &word);

 strcpy(smallest_word, word);
 strcpy(largest_word, word);

 while(n != 4){
  if(strcmp(word, smallest_word) < 0)
  {
   strcpy(smallest_word, word);
  }
  else if(strcmp(word, largest_word) > 0)
  {
   strcpy(largest_word, word);
  }
  printf("Enter Word: ");
  scanf("%s", word); 
  n = strlen(word);
 }
 
 printf("Smallest word: %s\n", smallest_word);
 printf("Largest word: %s\n", largest_word);

return 0;
}