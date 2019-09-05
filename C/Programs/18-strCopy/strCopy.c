#include <stdio.h>
#include <stdlib.h>

void *malloc(size_t size);
void free(void *ptr);
char *strcpy (char *strDestination, const char *strSource);

int main(){
 char *src = "This is a copy using strcpy.";
 char *dest = malloc(sizeof(src));
 printf("\nBefore strcpy(): \n");

 printf("Source: %s\n", src);
 printf("Destination: %s\n", dest);

 printf("Executing strcpy()... Please wait.\n");
 strcpy(dest, src);
 
 printf("\nAfter strcpy(): \n\n");

 printf("Source: %s\n", src);
 printf("Destination: %s\n", dest);

 return 0;
}

char *strcpy (char *strDestination, const char *strSource){
 unsigned i;
  for (i=0; strSource[i] != '\0'; ++i)
    strDestination[i] = strSource[i];
  
  strDestination[i] = '\0';
  return strDestination;
}