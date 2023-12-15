// S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3....n, n in N

#include <iostream>

using namespace std;

int sum (int);

int main () {
    int n=1;
    cout << sum(n);
    return 0;
}

int sum (int n) {

    int j = 1, i = 1, s = 0;
    while (i<=n) { //if n<=0 return 0.
        j *= i;
        s += j;
        ++i;
    } return s;
}