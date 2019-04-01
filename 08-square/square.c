#include <stdio.h>

int main(){
 int row1=0, row2=0, row3=0, row4=0, col1=0, col2=0, col3=0, col4=0, diag1=0, diag2=0, nums[15], i,j,k,l,m,o,p,q, n = 16;
 printf("Enter the numbers from 1 to 16 in any order: ");
 for (i = 0; i < n; i++){
  scanf("%d", &nums[i]);
 }
 for(j = 0;j < n;j++){
   printf("%4d%c", nums[j], (j==3 || j==7 || j==11) ? '\n' : ' ');
   if(j <= 3) 
   {
    row1 += nums[j];
   }
   if(j >= 4 && j <= 7)
   {
    row2 += nums[j];
   }
   if(j >= 8 && j <= 11)
   {
    row3 += nums[j];
   }
   if(j >= 12)
   {
    row4 += nums[j];
   }
  }
  for(k = 0; k < n; k+=4)
   col1 += nums[k];
  for(l = 1; l < n; l+=4)
   col2 += nums[l];
  for(m = 2; m < n; m+=4)
   col3 += nums[m];
  for(o = 3; o < n; o+=4)
   col4 += nums[o]; 
  for(p = 0; p < n; p+=5)
   diag1 += nums[p];
  for(q = 3; q < n - 1; q+=3)
   diag2 += nums[q];
 printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
 printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
 printf("Diagonal sums: %d %d\n", diag1, diag2);
 return 0;
}

/*
col: +4 in between
diag left to right: +5 in between
diag right to left: +3 in between

if(j == 0 || j == 4 || j == 8 || j == 12){
col1 += nums[j];
}
if(j==1 || j==5 || j==9 || j==13)
{
col2 += nums[j];
}
if(j==2 || j==6 || j==10 || j==14)
{
col3 += nums[j];
}
if(j==3 || j==7 || j==11 || j==15)
{
col4 += nums[j];
}
*/

