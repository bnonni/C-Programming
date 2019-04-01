#include <stdio.h>
#include <string.h>

int main()
{
 int i;
 char sentence[100], space = ' ';
 float n, average_word_len, word_count, space_count;
 printf("Enter a sentence: ");
 scanf("%[^\n]s",sentence);
 for(i = 0; i < 30; i++)
 {
  if(sentence[i] == '  ' || sentence[i] == '   ')
  {
   sentence[i] = ' ';
  }
  else if(sentence[i] == space){
   space_count += 1;
  }
 }
 n = strlen(sentence);
 n -= space_count;
 word_count = space_count + 1;
 average_word_len = (n / word_count);
 printf("Average word length: %.1f\n", average_word_len);
return 0;
}