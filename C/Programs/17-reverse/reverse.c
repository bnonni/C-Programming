#include <stdio.h>
#define N 50

int main()
{
	int arr[N] = {0},i=0;
	char c;
	printf("Enter a message: ");
	while((c = getchar()) != '\n')
	{
		arr[i] = c;
		i++;
	}
			
	printf("Reversal is: ");
	for(i = N - 1; i >= 0; i--)
	{
		putchar(arr[i]);
	}
printf("\n");
return  0;

}
