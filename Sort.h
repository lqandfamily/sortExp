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
 * 划分并排序
 * @param arr 子表数组
 * @param low 子表的低位索引开始位置
 * @param high 子表的高位索引借结束位置
 * @param cutPoint 划分的中间位置（基准数位置索引）
 */
void partition(elementType arr[], int low, int high, int *cutPoint);

/**
 * 快速排序
 * @param arr
 * @param low
 * @param high
 */
void quickSort(elementType arr[], int low, int high);

/**
 * 打印数组中所有元素
 * @param arr
 * @param n 数组长度
 */
void printArray(elementType arr[], int n);

#endif
