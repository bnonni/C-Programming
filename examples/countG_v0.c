#include<stdio.h>

void countG(void){
    
    FILE *fp;
    fp = fopen("Chrom1","r");
    
    char ch;
    int count=0;
    
    while((ch = fgetc(fp)) != EOF){
        if(ch=='G') count++;

    }
    printf("count is %d\n",count);
    fclose(fp);

}

void main(void){
    
    countG();

 }
