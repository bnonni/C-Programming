#include<stdio.h>
#include <pthread.h>
#define  THREAD_NUM 10
#define OFFSET 60000000/THREAD_NUM

void* countG(void  *off){
    int offset;
    offset=*((int *)off); // the argument is passed to the work function

    printf("the passed offset is %d\n", offset);
    
    FILE *fp;
    fp = fopen("Chrom1","r");
    
    fseek(fp,offset,SEEK_SET);
    
    char ch;
    int count=0;
    int num=0;
    
    while((ch = fgetc(fp)) != EOF && num<OFFSET){
        if(ch=='G') count++;
        num++;
    }
    printf("count is %d\n",count);
    fclose(fp);
    pthread_exit(count);
}

void main(void){
    pthread_t threads[THREAD_NUM];
    int offset[THREAD_NUM];
    int t=0;
    for (t=0; t<THREAD_NUM; t++) {
        offset[t]=t*OFFSET;
        /* pthread_create: create a new thread in each iteration*/
        /*Address of thread Id, attribute of thread, address of working function, address of arguments*/
        int rc = pthread_create(&threads[t], NULL, &countG, (void *) &offset[t]);
        if (rc) {
            printf("ERROR; return code from pthread_create() is %d\n", rc);
            exit(-1); }
    }
    
    /* pthread_join : wait for the execution of all threads*/
    int sum=0;
    int count[THREAD_NUM];
    for (t=0; t<THREAD_NUM; t++) {
        pthread_join(threads[t], &count[t]); /*the returned value is in count[t]*/
        sum=sum+count[t];
    }
    
    printf("total count is %d \n", sum);

    
    
 }
