#include <bits/stdc++.h>

using namespace std;

void SelectionSort(int a[], int n){
	
	for(int i=0; i<(n-1); ++i){

		int smallest = a[i], i_smallest=i;

		for(int j=i+1; j<n; ++j){
			if(a[j] < smallest){
				smallest = a[j];
				i_smallest = j; //selecting
			}
		}
		swap(a[i], a[i_smallest]);
	}
}

int main(){
	
    cout << "{ 8, 5, 2, 7, 9, 3, 2 }\n";

	int a[] = { 8, 5, 2, 7, 9, 3, 2 };

	int n=sizeof(a)/sizeof(int);

	SelectionSort(a, n); cout << endl;

	for(int i=0; i<n; ++i){
		cout << a[i] << " ";
	}
	return 0;

}