#include "../common.h"
#include "QuickSort.cpp"

int main() {
    int n = 8;
    int* numbers = randomArray(n);
    std::cout << "Before sort: ";
    printNumbers(numbers, n);
    quickSort(numbers, n);
    std::cout << "After  sort: ";
    printNumbers(numbers, n);
}