#include <stdio.h>
#include <math.h>

int main(){
    int P, n;
    double i, r, A;
    printf("Enter amount of loan : $ ");
     scanf("%d", &P);
    printf("Enter interest rate per year : %% ");
    scanf("%lf", &r);
    printf("Enter total number of payments : ");
    scanf("%d", &n);
    r = r / 12;

    A = P * ( r * pow((1 + r), n ) / ( pow((1 + r), n ) - 1));
    i = P - A;

    printf("\nMonthly payment should be: %lf ", A);
    printf("\n===============AMORTIZATION SCHEDULE===============\n");
    printf("#        Payment        Principal        Interest        Balance\n\n");
    printf("         %lf         %lf         %lf         %lf", A, P,  );
    return 0;
}