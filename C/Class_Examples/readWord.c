#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
    char *fileName="myFile.txt";
    
    FILE  *fp;
    fp = fopen(fileName, "r");

    if(fp == NULL){
        printf("Error opening file\n");
        exit(-1);
    }
    
    char buff[100];
    int i=0;
    while(fscanf(fp,"%s",buff)!=-1){
            puts(buff);
    }
    
    fclose(fp);
}

