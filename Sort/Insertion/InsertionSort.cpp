#include "../common.h"

/*
Insertion sort:
    Interate through the elements, inserting them
    into the correct location in the sorted sub array.

Time: O(n^2)
Space: O(1) - In place
*/
void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > tmp) {
            arr[j+1] = arr[j];
            j--;
        }

        j++;
        if (j != i)
            arr[j] = tmp;
    }
}