#include "../common.h"
#include "MergeSort.cpp"

int main() {
    int n = 8;
    int* numbers = randomArray(n);
    std::cout << "Before sort: ";
    printNumbers(numbers, n);
    mergeSort(numbers, n);
    std::cout << "After  sort: ";
    printNumbers(numbers, n);
}