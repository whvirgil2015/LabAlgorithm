//
// Created by Hughie on 2018/11/25.
//

#ifndef LABALGORITHM_ISORTER_H
#define LABALGORITHM_ISORTER_H


class ISorter {
public:
    ///@param dataArr data array to sort, input and output container
    ///@param arrSize size of dataArray
    virtual void sort(int dataArr[], const int arrSize) = 0;
};


#endif //LABALGORITHM_ISORTER_H
