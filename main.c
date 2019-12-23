#include <stdio.h>
#include "SortHeap.h"
#include "Sort.h"

/**
 * 测试实验一
 */
void testSortHeap() {
    int n = 25;
    int i;
    int srcArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    int sortedArray[25];
    sortByHeap(sortedArray, srcArray, n);

    printf("排序后：\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", sortedArray[i]);
    }

}

/**
 * 测试希尔排序
 */
void testShellSort() {
    int n;
    elementType srcArray[] = {180, 203, 32, 46, 25, 76, 17, 58, 99, 100, 11, 102, 13, 54, 75, 6, 27, 18, 19, 29, 2, 82};
    n = sizeof(srcArray) / sizeof(elementType);
    shellSort(srcArray, n);
    printArray(srcArray, n);
}

/**
 * 测试直接插入排序
 */
void testInsertSort() {
    int n;
    elementType srcArray[] = {180, 203, 32, 46, 25, 76, 17, 58, 99, 100, 11, 102, 13, 54, 75, 6, 27, 18, 19, 29, 2, 82};
    n = sizeof(srcArray) / sizeof(elementType);
    insertSort(srcArray, n);
    printArray(srcArray, n);
}

/**
 * 测试快速排序
 */
void testQuickSort() {
    int n;
    elementType srcArray[] = {180, 203, 32, 46, 25, 76, 17, 58, 99, 100, 11, 102, 13, 54, 75, 6, 27, 18, 19, 29, 2, 82};
    n = sizeof(srcArray) / sizeof(elementType);
    quickSort(srcArray, 0, n);
    printArray(srcArray, n);
}

/**
 * 测试堆排序
 */
void testHeapSort() {
    int n;
    elementType srcArray[] = {180, 203, 32, 46, 25, 76, 17, 58, 99, 100, 11, 102, 13, 54, 75, 6, 27, 18, 19, 29, 2, 82};
    n = sizeof(srcArray) / sizeof(elementType);
    heapSort(srcArray, n);
    printArray(srcArray, n);
}


int main() {
//    testSortHeap();
//    testShellSort();
//    testInsertSort();
//    testQuickSort();
    testHeapSort();
    return 0;
}

