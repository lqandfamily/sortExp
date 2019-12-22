/**
 * 排序算法实现文件
 */
#include "Sort.h"

void shellSort(elementType srcArr[], int n) {
    int i;
    int step;           //步长
    int insertIndex;    //插入位置
    int tmp;            //插入排序临时存储变量
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

void printArray(elementType arr[], int n) {
    int i;
    printf("打印数组中所有元素：\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}