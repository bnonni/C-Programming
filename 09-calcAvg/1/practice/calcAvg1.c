#include <stdio.h>
#include <string.h>

int main(){
 int  i;
 float avg_wrd_len, n, words, spce_cnt;
 char sent[30];
 char space = ' ';
 printf("Enter a sentence: "); 
 for(i=0; i < 30; i++){
  scanf("%c", &sent[i]);
  if(sent[i] == space){
   spce_cnt += 1;
  }
 }
 n = strlen(sent);
 n -= spce_cnt;
 words = spce_cnt + 1;
 avg_wrd_len = (n / words);
 //printf("n=%f ; words=%f ; avg_wrd_len=%f ; spce_cnt=%f ", n, words, avg_wrd_len, spce_cnt);
 printf("Average word length: %.1f\n", avg_wrd_len);
}