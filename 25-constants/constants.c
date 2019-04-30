#include <stdio.h>
#include <stdlib.h>

union student{
 char a[10];
 int id;}u;
 
float profit = 2150.48f;

int main()
{
 printf("%lf\n", profit);
 return 0;
}
