#include<stdio.h>

int main(){
    int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0,d12=0,d13=0,d14=0,d15=0,d16=0;
    printf("Enter the numbers from 1 to 16 in any order\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&d1, &d2, &d3,&d4,&d5, &d6, &d7,&d8,&d9, &d10, &d11,&d12,&d13, &d14, &d15,&d16);
    
    printf("%2d\t%2d\t%2d\t%2d\n",d1,d2,d3,d4);
    printf("%2d\t%2d\t%2d\t%2d\n",d5,d6,d7,d8);
    printf("%2d\t%2d\t%2d\t%2d\n",d9,d10,d11,d12);
    printf("%2d\t%2d\t%2d\t%2d\n",d13,d14,d15,d16);
    
    printf("Row sums:%-4d%-4d%-4d%-4d\n",d1+d2+d3+d4,d5+d6+d7+d8,d9+d10+d11+d12,d13+d14+d15+d16 );
    printf("Column sums:%-4d%-4d%-4d%-4d\n",d1+d5+d9+d13,d2+d6+d10+d14,d3+d7+d11+d15,d4+d8+d12+d16);
    printf("Diagonal sums: %-4d%-4d\n",d1+d6+d11+d16,d4+d7+d10+d13);
    // 0 before the width lets compiler fill in the extra positions with 0s instead of spaces
    
}
