#include "SortHeap.h"

void sortByHeap(int sortedArray[], const int srcArray[], int n) {
    int i, j;

    j = 0;
    for (i = 0; i < n; i++) {
        if (srcArray[i] % 3 == 0) {
            sortedArray[j++] = srcArray[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (srcArray[i] % 3 == 1) {
            sortedArray[j++] = srcArray[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (srcArray[i] % 3 == 2) {
            sortedArray[j++] = srcArray[i];
        }
    }
}
