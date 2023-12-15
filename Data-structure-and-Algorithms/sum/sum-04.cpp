// S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1), n in Z+

#include <iostream>

float sum (int);

int main () {
   int n=0;

   std::cout << "\nS(" << n << ") = " << sum(n) << "\n";

   return 0;
}

float sum (int n) {
    float s=0;

    for(float i=1; i<=(2*n+1); i+=2) { //if n<0 return 0.
        s+=1/i;
    } return s;
}