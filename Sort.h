/**
 * 排序算法头文件
 */
#ifndef SORT_H
#define SORT_H

#include <stdio.h>

typedef int elementType;

/**
 * 希尔排序
 * @param srcArr 源数组,同时接受排序结果
 * @param n 数组长度
 */
void shellSort(elementType srcArr[], int n);

/**
 * 直接插入排序
 * @param arr 源数组,同时接受排序结果
 * @param n 数组长度
 */
void insertSort(elementType arr[], int n);

/**
 * 打印数组中所有元素
 * @param arr
 * @param n 数组长度
 */
void printArray(elementType arr[], int n);

#endif
