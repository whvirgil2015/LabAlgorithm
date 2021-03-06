//
// Created by Hughie on 2018/11/27.
// 快速排序的基本思想：通过一趟排序将待排记录分隔成独立的两部分，
// 其中一部分记录的关键字均比另一部分的关键字小，
// 则可分别对这两部分记录继续进行排序，以达到整个序列有序
//
// 快速排序使用分治法来把一个串（list）分为两个子串（sub-lists）。具体算法描述如下：
// 从数列中挑出一个元素，称为 “基准”（pivot）；
// 重新排序数列，所有元素比基准值小的摆放在基准前面，所有元素比基准值大的摆在基准的后面（相同的数可以到任一边）。
// 在这个分区退出之后，该基准就处于数列的中间位置。这个称为分区（partition）操作；
// 递归地（recursive）把小于基准值元素的子数列和大于基准值元素的子数列排序。
//

#ifndef LABALGORITHM_S006_QUICKSORT_H
#define LABALGORITHM_S006_QUICKSORT_H


#include "ISorter.h"

class S006_QuickSort : public ISorter{
public:
    void sort(int *dataArr, int arrSize) override;

private:
    void func1(int *dataArr, int arrSize);
    void func1_sort(int *dataArr, int pivotAnchorIndex, int startIndex, int endIndex, int arrSize);
    int counter;

    ///< 左右指针法
    void func2(int *dataArr, int arrSize);
    void func2_sort(int *dataArr, int leftIndex, int rightIndex);
    void func2_sort_2(int *dataArr, int pivotIndex, int leftIndex, int rightIndex);

    ///< todo 挖坑法
    ///< todo 前后指针法
};


#endif //LABALGORITHM_S006_QUICKSORT_H
