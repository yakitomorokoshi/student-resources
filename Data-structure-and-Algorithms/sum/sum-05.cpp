// S(n) = 1/2 + 1/4 + … + 1/2n, n in N

#include <iostream>

float sum (int);

int main () {
    int n=1;
    std::cout << sum(n);
    return 0;
}

float sum (int n) {
    float s = 0;
    for(float i = 2; i <= (2*n); i+=2) { //if n<=0 return 0.
        s += 1/i;
    } return s;
}