#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int a[], int n) {

	for (int i = 1; i < n; ++i){
		
		int r = i;

		for (int j = i - 1; j >= 0; --j){

			if (a[r]<a[j]){
				swap(a[r], a[j]);
				r = j;
			} 
		}
	}
}

int main(){

    cout << "{ 49, 72, 72, 67, 97, 17, 37, 25 }\n";

	int a[] = { 49, 72, 72, 67, 97, 17, 37, 25 }; //a[]: vung nho duoc con tro a tro vao
	int n=sizeof(a)/sizeof(int);

	InsertionSort(a, n); cout << endl;
	
	for(int i = 0; i < n; ++i){
		cout << a[i] <<" ";
	}

	return 0;

}