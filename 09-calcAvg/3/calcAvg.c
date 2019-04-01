#include <stdio.h>
#include <string.h>
#define IN 1 
#define OUT 0

int main()
{
 int i, state;
 char sentence[100], space = ' ', c;
 float n, average_word_len, word_count, space_count;
 printf("Enter a sentence: ");
 scanf("%[^\n]s",sentence);
 c = getchar();
 for(i = 0; i < 30; i++)
 {
  if(c == ' ' || c == '\n' || c == '\t')
   state=OUT;
  else if(state==OUT){
   state=IN;
    ++nw;
  
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