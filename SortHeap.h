/**
 * 划分的头文件
 * 所有３的倍数在最左边，所有除以３余１的数在中间，而所有除以３余２的数在最右边
 */
#ifndef SORT_HEAP_H
#define SORT_HEAP_H

/**
 * 所有３的倍数在最左边，所有除以３余１的数在中间，而所有除以３余２的数在最右边
 * @param sortedArray 接受排序好的数组
 * @param srcArray 数据源数组
 * @param n 数组长度
 */
void sortByHeap(int sortedArray[], const int srcArray[], int n);

#endif
