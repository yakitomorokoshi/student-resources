// S(x, n) = x^2 + x^4 + ... + x^2n, x in R, n in N

#include <iostream>
#include <cmath>

using namespace std;

float sum(float, int);

int main() {
    float x=2; //input
    int n=4;  //input

    cout << sum(x, n);
    return 0;
}

float sum (float x, int n) { //if n out N return 0.
    
    if (n == 1){
        return x*x;
    }

    float s = 0;
    for (float i = 2; i <= 2*n; i+=2) {
        s+=pow(x,i);
    } return s;
}