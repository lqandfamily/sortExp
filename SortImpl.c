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

void shift(elementType arr[], int rootIndex, int upperIndex) {
    int isFinished = 0;                        //调整是否完成的标志
    elementType rootTmpData = arr[rootIndex];  //取出当前根保存为临时值，腾空根位置
    int maxChildIndex = 2 * rootIndex;         //默认认为左孩子最大
    //开始递归调整
    while (maxChildIndex <= upperIndex && !isFinished) {
        //右孩子最大
        if (maxChildIndex < upperIndex && arr[maxChildIndex + 1] > arr[maxChildIndex]) {
            maxChildIndex += 1;
        }
        //根即为最大值，无需调整
        if (rootTmpData >= arr[maxChildIndex]) {
            isFinished = 1;
            //根非最大值，需要调整最大值到根
        } else {
            arr[rootIndex] = arr[maxChildIndex];    //调整

            rootIndex = maxChildIndex;              //向下继续筛选
            maxChildIndex = maxChildIndex * 2;
        }
    }
    //将原根值填充到向下搜索到到合适位置中
    arr[rootIndex] = rootTmpData;
}

void heapSort(elementType arr[], int n) {
    //无序序列建堆
    int rootIndex;      //根索引
    for (rootIndex = n / 2; rootIndex >= 0; rootIndex--) {
        shift(arr, rootIndex, n);
    }
    for (rootIndex = n; rootIndex >= 1; rootIndex--) {
        //输出根
        swap(arr, rootIndex, 0);
        //这里做个简单打印
//        printf("%d\t", arr[1]);
        shift(arr, 0, rootIndex - 1);
    }
}

void swap(elementType arr[], int m, int n) {
    elementType tmp = arr[m];
    arr[m] = arr[n];
    arr[n] = tmp;
}


void mergeSort(int arr[], int temp[], int left, int right) {
    if (left < right) {
        int center = (left + right) / 2;
        mergeSort(arr, temp, left, center); // 左边
        mergeSort(arr, temp, center + 1, right); // 右边
        merge(arr, temp, left, center + 1, right); // 合并两个有序
    }
}

void merge(int arr[], int temp[], int leftPos, int rightPos, int rightEnd) {
    int leftEnd = rightPos - 1; // 左边结束下标
    int tempPos = leftPos; // 从左边开始算
    int numEle = rightEnd - leftPos + 1; // 元素个数
    while (leftPos <= leftEnd && rightPos <= rightEnd) {
        if (arr[leftPos] <= arr[rightPos])
            temp[tempPos++] = arr[leftPos++];
        else
            temp[tempPos++] = arr[rightPos++];
    }
    while (leftPos <= leftEnd) {  // 左边如果有剩余
        temp[tempPos++] = arr[leftPos++];
    }
    while (rightPos <= rightEnd) { // 右边如果有剩余
        temp[tempPos++] = arr[rightPos++];
    }
    // 将temp复制到arr
    for (int i = 0; i < numEle; i++) {
        arr[rightEnd] = temp[rightEnd];
        rightEnd--;
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