//
//  QuickSort.hpp
//  
//
//  Created by Ngo Linh on 14/5/22.
//

#ifndef QuickSort_h
#define QuickSort_h

#include <stdio.h>
#include <vector>
#include "Sort.h"
class QuickSort: public Sort{
public:
    QuickSort();
    std::vector<int> Pivot(std::vector<int>list,int left,int right);
    std::vector<int> sort(std::vector<int> list);
    
    ~QuickSort();
};
#endif /* QuickSort_h */
