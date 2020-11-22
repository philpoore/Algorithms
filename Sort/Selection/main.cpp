#include "../common.h"
#include "SelectionSort.cpp"

int main() {
    int n = 8;
    int* numbers = randomArray(n);
    std::cout << "Before sort: ";
    printNumbers(numbers, n);
    selectionSort(numbers, n);
    std::cout << "After  sort: ";
    printNumbers(numbers, n);
}