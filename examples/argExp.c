/******
 * One example to learn how to use arguments in a main function
 * To execute this program,you can try
 * E.g.  $./argExp test.txt 10
 * E.g.  $./argExp 10
 * E.g.  $./argExp test.txt 1
 *******/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    printf("There are %d arguments from command line\n", argc);
    
    printf("Argument 0 is the command name %s\n", argv[0]);
    
    int i;
    for(i=1;i<argc;i++){
        printf("Argument %d is %s\n", i,argv[i]);
    }

    printf("The first character in  argument 1 is %c\n", argv[1][0]);
}

