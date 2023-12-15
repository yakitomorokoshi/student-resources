// S(x, n) = x + x^2/2! + x^3/3! + ... + x^n/n!, x in R, n in N

#include <stdio.h>
#include <math.h>

float sum (float, int);

int main() {
    float x=2;
    int n=1;

    printf("%f", sum(x, n));
    return 0;
}

float sum (float x, int n){

    float s=0;    
    
    //x^i/j
    for (double i=1, j=i; i <= n; ++i, j*=i){ //if n out N return 0.
        s+=pow(x, i)/j;
    } return s;
}