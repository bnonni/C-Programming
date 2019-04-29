#include <stdio.h>
#define N 50

int main()
{
	int arr[N] = {0}, *p;
 p=&arr[0];
	char c;
	printf("Enter a message: ");
	while((c = getchar()) != '\n')
	{
		*p = c;
		p++;
	}
			
	printf("Reversal is: ");
	p=&arr[N-1];
	while(p != arr-1){
		putchar(*p);
  --p;
 }
printf("\n");
return  0;
}
