// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;
 
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
 
// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    clock_t begin = clock();
    
    int arr[] = {8, 1, 0, 5, 88, 44, 12, 14, 11, 0, 4, 8, 100, 1088, 7, 4, 1, 1111, 4, 8, 100, 1088, 7, 4, 1, 1111, 4, 8, 100, 1088, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 100, 1088, 1111, 4, 8, 100, 1088, 14, 11, 0, 4, 8, 100, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 100, 1088, 1111, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1088, 7, 4, 1,14, 11, 0, 4, 8, 100, 1088, 7, 4, 1, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 7, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4, 8, 4, 1, 1111, 8, 1, 0, 5, 88, 44, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 14, 11, 0, 4, 8, 100, 1111, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);

    clock_t end = clock();
    cout<<"\nTime run: "<<(double)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
    return 0;
}
 
// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes