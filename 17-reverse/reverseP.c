#include <stdio.h>
#define N 30

int main()
{
	int arr[N], *p;
 p=&arr[0];
	char c;
	printf("Enter a message: ");
	while((c = getchar()) != '\n')
	{
		*p = c;
		p++;
	}
			
	printf("Reversal is: ");

	while(p != arr-1){
		putchar(*p);
  p--;
 }
printf("\n");
return  0;
}
