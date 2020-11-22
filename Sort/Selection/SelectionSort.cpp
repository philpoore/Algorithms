/*
Selection sort:
    Repeatidly find the next smallest element in
    the remaining array.

    Time: O(n^2)
    Space: O(1) - In place
*/
void selectionSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minValue, minIndex;
        bool minFound = false;

        // Find the min value.
        for (int j = i + 1; j < n; j++) {
            if (!minFound || arr[j] < minValue) {
                minIndex = j;
                minValue = arr[j];
                minFound = true;
            }
        }
        if (!minFound) continue;

        // swap arr[i] and arr[j]
        int tmp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = tmp;
    }
}