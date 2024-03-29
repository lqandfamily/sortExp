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
 * 堆的调整（筛选）
 * @param arr
 * @param rootIndex 需要调整的根
 * @param upperIndex 调整上限索引
 */
void shift(elementType arr[], int rootIndex, int upperIndex);

/**
 * 堆排序
 * 包含无序数组建堆和堆的输出
 * @param arr
 * @param n
 */
void heapSort(elementType arr[], int n);

/**
 * 元素交换
 * @param arr
 * @param m
 * @param n
 */
void swap(elementType arr[], int m, int n);


/**
 * 二路归并排序
 * @author https://www.jianshu.com/p/0e88554a5d97
 * @param arr
 * @param temp
 * @param left
 * @param right
 */
void mergeSort(int arr[], int temp[], int left, int right);

/**
 * 将两个有序表归并成一个有序表
 * @author https://www.jianshu.com/p/0e88554a5d97
 * @param arr
 * @param temp     临时数组
 * @param leftPos  左边开始下标
 * @param rightPos 右边开始下标
 * @param rightEnd 右边结束下标
 */
void merge(int arr[], int temp[], int leftPos, int rightPos, int rightEnd);

/**
 * 打印数组中所有元素
 * @param arr
 * @param n 数组长度
 */
void printArray(elementType arr[], int n);

#endif
