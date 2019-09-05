#include <stdio.h>
#include <string.h>

int main()
{
  char line[500], word[100], line_arr[10][20];
  int i = 0, j = 0, k = 0;
  
  printf("Please enter a string: ");
  gets(line);
  printf("Please enter the word to be removed: ");
  gets(word);
 
 while(line[i] != '\0')
 {
   if (line[i] == ' ')
    {
      line_arr[j][k] = '\0';
      j++;
      k = 0;
    }
    else
    {
      line_arr[j][k] = line[i];
      k++;
    }
    i++;
 }
 line_arr[j][k] = '\0';
 i = 0;
 while(i < j + 1){
   if (!strcmp(line_arr[i], word))
  {
      k = i;
      while(k < j + 1){
        strcpy(line_arr[k], line_arr[k + 1]);
        k++; 
      }
      j--;
    }
    i++;
 }

  for (i = 0; i < j + 1; i++)
    printf("%s ", line_arr[i]);
  
  printf("\n");
  return 0;
}