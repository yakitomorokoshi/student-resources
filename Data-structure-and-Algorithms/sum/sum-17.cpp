// S(x, n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + ... + x^n/(1 + 2 + 3 + ... + n), x in R, n in N

#include <iostream>
#include <math.h>

using namespace std;

double sum (double, int);

int main() {
    double x=2;
    int n=8;

    cout << sum(x, n); 
    return 0;
}
double sum (double x, int n) {
    double s = 0;

    //x^i/j
    for (double i = 1, j=1; i <= n; ++i, j+=i){ //if S(x, n<=0) return 0.
        s+=pow(x, i)/j;
    } return s;
}