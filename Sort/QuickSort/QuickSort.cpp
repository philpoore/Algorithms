#include "../common.h"
/*
Quick sort:
    Parition the array so:
        - all elements left of pivot are less that pivot
        - all elements right of pivot are greater that pivot
    Call quick sort recusivly on the left and right sub arrays.

Time: O(n^2)
Space: O(log n) Stack space
*/
int partion(int* arr, int n, int lo, int hi);

void quickSort_rec(int* arr, int n, int lo, int hi) {
    if (lo >= hi) return;

    // partition
    int pivot = partion(arr, n, lo, hi);

    // call quick sort on left and right sub arrays
    quickSort_rec(arr, n, lo, pivot);
    quickSort_rec(arr, n, pivot + 1, hi);
}

int partion(int* arr, int n, int lo, int hi) {
    int pivot = arr[((hi + lo) / 2)];
    int i = lo;
    int j = hi;
    while (true) {
        while (arr[i] < pivot) {
            i += 1;
        };

        while (arr[j] > pivot) {
            j -= 1;
        };

        if (i >= j) {
            return j;
        }

        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        
        i++;
        j--;
    }
}

void quickSort(int* arr, int n) {
    quickSort_rec(arr, n, 0, n - 1);
}