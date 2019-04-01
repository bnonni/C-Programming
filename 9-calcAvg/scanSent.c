#include<stdio.h>

int main()
{
    char sentence[100];
    printf("Type your statement:\n");

    scanf("%[^\n]s",sentence);

    printf("%s", sentence);

return 0;
}