#include<stdio.h>

int main()
{
 int n,i,s = 3,j;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 printf("First %d prime numbers are: 2 ", n);

 for( i = 2 ; i <= n; )
 {
  
  for( j = 2; j <= s - 1 ; j++ )
  {

   if(s%j == 0)
      break;
  }
  if(j == s)
  {
   printf("%d ", s);
   i++;

  }
  s++;
 }
 printf("\n");
 return 0;
}