#include "selection_sort.h"

void selectionSort(Element* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            Element temp = arr[i];
            
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}