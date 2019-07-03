#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    char *fileName="myFile.txt";
    char ch;
    if(argc!=3){
        printf("Please enter two argument\n");
        exit(-1);
    }
    
    fileName=argv[1];
    ch=argv[2][0]; // or *(argv[2]+0)
    
    FILE  *fp;
    fp = fopen(fileName, "r");

    if(fp == NULL){
        printf("Error: file not exist\n");
        exit(-1);
    }
     

    int count=0;

    char buff[255];
    int i=0;
    while(fgets(buff, 255, (FILE*)fp)){
        for (i = 0; i < strlen(buff); i++) {
            if (buff[i]==ch) {
                count++;
            }
        }
       
    }
    
    fclose(fp);
  
    printf("'%c' appeared %d times \n", ch, count);
}

