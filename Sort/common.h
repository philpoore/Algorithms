#pragma once

#include <iostream>

void printNumbers(int arr[], int n) {
    std::cout << "[";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
        if (i < n - 1) std::cout << " ";
    }
    std::cout << "]\n";
}

int* randomArray(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
    }
    return a;
}