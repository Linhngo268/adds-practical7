//
//  BinarySearch.hpp
//  
//
//  Created by Ngo Linh on 16/5/22.
//

#ifndef BinarySearch_h
#define BinarySearch_h
#include <vector>
#include<iostream>
#include <stdio.h>
class RecursiveBinarySearch{
public:
    RecursiveBinarySearch();
    bool search(std::vector<int> sort_list, int x);
    ~RecursiveBinarySearch();
private:
    int BinarySearch(std::vector<int> sort_list, int left, int right,int x );
    
    
};

#endif /* BinarySearch_hpp */
