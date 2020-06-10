#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("\n");
    
    char s[10];
    scanf("%s", s);
    printf("%s\n", s);
    scanf("\n");
    
    char sen[20];
    fgets(sen, sizeof(sen), stdin);
    puts(sen);
    scanf("\n");

    return 0;
}