// S(n) = 1/2 + 3/4 + 5/6 + … + (2n + 1)/(2n + 2), n in Z+

#include <iostream>

float sum (int);

int main() {
    int n=-1;
    std::cout << sum(n);
    return 0;
}

float sum (int n) {
    float s = 0; //if n<0 return 0.
    for(float i = 1, j = 2; i<=(2*n+1); i+=2, j+=2){ // or for(float i = 1, j = 2; j<=(2*n+2); i+=2, j+=2)
        s += i/j;
    } return s;
}