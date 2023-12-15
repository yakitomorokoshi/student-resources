#include <iostream>
#include <algorithm> /*sort*/

using namespace std;

int main() {
	cout << "{ 2, 4, 6, 1 }\n";

	int a[] = { 2, 4, 6, 1 };
	int n=sizeof(a)/sizeof(int);

	sort(a, a+n,  greater<int>());

	for(int i=0; i<n; ++i){
		cout << a[i] << " ";
	}

	return 0;
}