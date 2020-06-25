#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char *s; int counts[10] = {0}, i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int len = strlen(s);
    for(i = 0; i < len; i++)
    {
     if(s[i] >= '0' && s[i] <= '9'){
      int digit = s[i] - '0';
      counts[digit]++;
     }
    }

    int countLen = sizeof(counts)/sizeof(counts[0]);
    for(i = 0; i < countLen; i++)
    {
     printf("%d ", counts[i]);
    }

    return 0;
}
