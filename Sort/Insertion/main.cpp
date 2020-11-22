#include "../common.h"
#include "InsertionSort.cpp"

int main() {
    int n = 8;
    int* numbers = randomArray(n);
    std::cout << "Before sort: ";
    printNumbers(numbers, n);
    insertionSort(numbers, n);
    std::cout << "After  sort: ";
    printNumbers(numbers, n);
}