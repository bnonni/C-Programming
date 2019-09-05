#include <stdio.h>

int main(void){
 int i, j;
 float f, g;

  scanf("%d %d", &i, &j);
  scanf("\n");
  scanf("%f %f", &f, &g);

  //  int Sum, Difference;
  float sum, difference;

  sum = i + j;
  difference = i - j;

  printf("%d %d\n", (int)sum, (int) difference);
  sum = 0;
  difference = 0;
  sum = f + g;
  difference = f - g;

  printf("%.1f %.1f\n", sum, difference);

 return 0;
}