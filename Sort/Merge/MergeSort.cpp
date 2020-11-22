#include "../common.h"
/*
Merge sort:
    Split the array into two equal length arrays.
    Recursivly call merge sort until base case of array
    length 1 is reached.
    After the recursion, merge the two sorted sub arrays
    using a temporary array.

Time: O(nlog(n))
Space: O(n)
*/
void mergeSort_rec(int* arr, int n, int lo, int hi) {
    // Base case
    if (lo >= hi) return;

    int mid = (lo + hi) / 2;

    // Recurse
    mergeSort_rec(arr, n, lo, mid);
    mergeSort_rec(arr, n, mid + 1, hi);

    // Merge array results
    int* tmpArr = new int[hi - lo + 1];
    int k = 0;
    int i = lo;
    int j = mid + 1;
    while(i <= mid && j <= hi) {
        if (arr[i] < arr[j]) {
            tmpArr[k++] = arr[i++];
        } else {
            tmpArr[k++] = arr[j++];
        }
    }
    while(i <= mid) {
        tmpArr[k++] = arr[i++];
    }
    while(j <= hi) {
        tmpArr[k++] = arr[j++];
    }
    
    // Copy back onto orignal array
    for (int k = 0, i = lo; i <= hi;) {
        arr[i++] = tmpArr[k++];
    }

    delete[] tmpArr;
}

void mergeSort(int* arr, int n) {
    mergeSort_rec(arr, n, 0, n - 1);
}