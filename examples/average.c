#include <stdio.h>



int main()
{
    printf("The average of 1 and 2 is %lf\n",average(1,2));
    return 0;
}


double average (double x, double y){
    return (x+y)/2;
}