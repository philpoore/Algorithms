#include "../common.h"
/*
Merge sort:
    Split the array into two equal length arrays.
    Recursivly call merge sort until base case of array
    length 1 is reached.
    After the recursion, merge the two sorted sub arrays
    in place.

Time: O(n log(n))
Space: O(1)
*/
void array_merge(int* arr, int n, int lo, int mid, int hi) {
    int i = lo;
    int j = mid + 1;
    if (arr[mid] < arr[j]) {
        // Already sorted.
        return;
    }
    
    while(j <= hi && i <= mid) {
        if (arr[i] <= arr[j]) {
            // Element is in the correct place
            i++;
        } else {
            // Need to move all the elements along
            int value = arr[j];
            int index = j;
            while(index > i) {
                arr[index] = arr[index - 1];
                index--;
            }
            // Place element at the front
            arr[i] = value;
            // Increment pointers
            i++; j++; mid++;
        }
    }
}

void mergeSort_rec(int* arr, int n, int lo, int hi) {
    // Base case
    if (lo >= hi) return;
    int mid = (lo + hi) / 2;

    // Recurse
    mergeSort_rec(arr, n, lo, mid);
    mergeSort_rec(arr, n, mid + 1, hi);

    // Merge array results.
    array_merge(arr, n, lo, mid, hi);
}

void mergeSort(int* arr, int n) {
    mergeSort_rec(arr, n, 0, n - 1);
}