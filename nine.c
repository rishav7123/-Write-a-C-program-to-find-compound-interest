// Write a C program to find compound interest
#include<stdio.h>
#include<math.h>
int main(){
    double principal = 10000;
    double rate = 5;
    double time = 3;
    int n = 4;

    double amount, compoundInterest;

    amount = principal * pow((1 + (rate/(n * 100))), n*time);
    compoundInterest = amount - principal;

    printf("Principal = %.2lf\n", principal);
    printf("Rate = %.2lf\n", rate);
    printf("Time = %.2lf years\n", time);
    printf("Compounded %d times per year\n", n);
    printf("\nCompound Interest = %.2lf\n", compoundInterest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}