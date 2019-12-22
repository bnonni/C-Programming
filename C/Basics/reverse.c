/* reverse.c */
#include<stdio.h>

#define N 50

int main(){
	int arr[N],i=0;
	char ch;

    printf("Enter a message: ");
	
    // Get input from user by using getchar()
	while((ch=getchar())!='\n'){
		arr[i]=ch;
        i++;
    }

    
    printf("Reversal is: ");
    
    // Print out the reversal by using putchar()
	for(i=i-1;i>0;i--){
		putchar(arr[i]);
	}
    
    printf("\n");

    return  0;
}

