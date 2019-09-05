#include <stdio.h>
#define N 50

int main()
{
	int arr[N] = {0}, *p;
 p = &arr[0]; //must give address of start of arr to pointer
	char c;
	
	printf("Enter a message: ");
	while((c = getchar()) != '\n')
	{
		*p = c;
		p++;
	}
			
	printf("Reversal is: ");
	p = &arr[N-1]; //last char = \0, so reset pointer to last char-1
	while(p != arr-1){ //while p != address of arr start - 1
		putchar(*p); //print char from the pointer p
  --p;
 }
printf("\n");
return  0;
}
