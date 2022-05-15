//
//  BubbleSort.hpp
//  
//
//  Created by Ngo Linh on 14/5/22.
//

#ifndef BubbleSort_h
#define BubbleSort_h
#include<iostream>
#include<vector>
#include"Sort.h"
 
class BubbleSort:public Sort
{
public:
    BubbleSort();
    std::vector<int>sort(std::vector<int>list);
    
    ~BubbleSort();
    
};
#endif /* BubbleSort_h */
