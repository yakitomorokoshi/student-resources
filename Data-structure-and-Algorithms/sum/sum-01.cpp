// S(n) = 1 + 1/2 + 1/3 + … + 1/n, n in N

#include <iostream>

float sum (int n) { 
    float s = 0 , i = 1; 

    while (i<=n) { //if n<=0 return 0.
        s += 1/i;
        i++;
    } return s;
}

int main() {

    int n=10;

    std::cout << "\nS(" << n << ") = " << sum(n);

    return 0;
}