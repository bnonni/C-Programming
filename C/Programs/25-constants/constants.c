#include <stdio.h>
#include <stdlib.h>

union student
{
 char a[10];
 int id;
 } u;
 
 int main()
{
 float f, frac, profit = 2150.48f;
 short int i;
 int j = 1000;
 
 i = j * j;
 printf("%lf\n", profit);
 printf("%hd\n", i);
 return 0;
}
