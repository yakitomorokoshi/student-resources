// time: ~0.07 ms
#include <iostream>
#include <vector>

using namespace std;

void merge(int a[], int begin, int m, int end){

    //tron cac phan tu cua a thuoc [begin, end] vao V
    int i=0, j=0, k=0;
    int V[(end-begin)+1]; //mang tam tru cac phan tu cua a thuoc [begin, end] co trat tu
    
    while(i<(m-begin)+1 && j<end-m){
        if(a[begin+i]<=a[m+1+j]){
            V[k]=a[begin+i];
            ++i;
            ++k;
        }
        else{
            V[k]=a[m+1+j];
            ++j; 
            ++k;
        }

    }


    if(i>j){
        //copy cac phan tu con lai thuoc [m+1, end] vao V
        while(k<(end-begin)+1){
            V[k]=a[m+1+j];
            ++j;
            ++k;
        }
    }
    else{
        //copy cac phan tu con lai thuoc [begin, m] vao V
        while(k<(end-begin)+1){
            V[k]=a[begin+i];
            ++i;
            ++k;
        }
    }

    //Replace: V->a[begin, end]
    for(int i=0; i<(end-begin)+1; ++i){
        a[begin+i]=V[i];
    }
    
}

//O(nlogn)+O(nlogn)=O(nlogn)
void MergeSort(int a[], int begin, int end){

    if(begin<end){

        int m=begin+(end-begin)/2;
        
        MergeSort(a, begin, m); //O(logn)
        MergeSort(a, m+1, end); //O(logn)
        merge(a, begin, m, end); //O(n)
    }


}

int main() {
    
    int a[] = {8, 1, 2, 5, 4, 5, 8, 88, 7, 188, 8};
    int n = sizeof(a)/sizeof(int);

    MergeSort(a, 0, n-1);

    for(int i=0; i<n; ++i){
        cout << a[i] << " ";
    }
    
    return 0;
    
}