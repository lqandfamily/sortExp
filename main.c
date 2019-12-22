#include <stdio.h>
#include "SortHeap.h"

void testSortHeap() {
    int n = 25;
    int i;
    int srcArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    int sortedArray[25] = {0};
    sortByHeap(sortedArray, srcArray, n);

    printf("排序后：\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", sortedArray[i]);
    }

}

int main() {
    testSortHeap();
    return 0;
}

