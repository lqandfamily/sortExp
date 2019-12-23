/**
 * 排序算法实现文件
 */
#include "Sort.h"

void shellSort(elementType srcArr[], int n) {
    int i;
    int step;           //步长
    int insertIndex;    //插入位置
    elementType tmp;            //插入排序临时存储变量
    for (step = n / 2; step >= 1; step /= 2) {
        //插入排序算法
        for (i = step; i < n; i++) {
            tmp = srcArr[i];        //取出临时变量
            insertIndex = i;

            while (insertIndex > (step - 1) && tmp < srcArr[insertIndex - step]) {
                //插入位置前移，寻找合适插入位置
                srcArr[insertIndex] = srcArr[insertIndex - step];
                insertIndex -= step;
            }
            //插入
            srcArr[insertIndex] = tmp;
        }
    }
}

void insertSort(elementType arr[], int n) {
    int i, j;
    elementType tmp;            //插入排序临时存储变量
    for (i = 1; i < n; i++) {
        tmp = arr[i];//取出一个待排序元素
        j = i - 1;
        //寻找合适的插入位置
        //这里强烈注意j的越界问题
        while (j >= 0 && arr[j] > tmp) {
            arr[j + 1] = arr[j];
            j--;
        }
        //找到合适插入位置
        arr[j + 1] = tmp;
    }
}

void partition(elementType arr[], int low, int high, int *cutPoint) {
    elementType temp = arr[low];        //这里选用子表的第一个数作为基准数，腾空该位置
    //开始排序
    while (low != high) {
        //从后面搜索小的元素
        while (low < high && arr[high] > temp) {
            high--;
        }
        //找到小的元素
        if (low < high) {
            arr[low] = arr[high];
            low = low + 1;
        }
        //从后面搜索大的元素
        while (low < high && arr[low] < temp) {
            low++;
        }
        //找到大的元素
        if (low < high) {
            arr[high] = arr[low];
            high = high - 1;
        }
    }
    //存放基准数
    arr[low] = temp;
    //返回基准数索引
    *cutPoint = low;
}

void quickSort(elementType arr[], int low, int high) {
    int cutPoint;
    //递归结束条件
    if (low < high) {
        //1.划分并排序
        partition(arr, low, high, &cutPoint);
        //2.对子表划分排序
        quickSort(arr, low, cutPoint - 1);
        quickSort(arr, cutPoint + 1, high);
    }
}

void printArray(elementType arr[], int n) {
    int i;
    printf("打印数组中所有元素：\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}