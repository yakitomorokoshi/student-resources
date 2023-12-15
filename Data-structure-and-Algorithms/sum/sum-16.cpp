// S(n) = 1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ... + 1/(1 + 2 + 3 + ... + n), n in N

#include <iostream>

using namespace std;

float sum (int);

int main() {
    int n=7;
    cout << sum(n);
    return 0;
}

float sum (int n) { //if n<=0 return 0.
    float s=0;
    for(float i=1, j=i;i<=n;++i,j+=i){
        s+=(1/j);
    } return s;
}