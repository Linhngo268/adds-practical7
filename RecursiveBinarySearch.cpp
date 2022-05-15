//
//  BinarySearch.cpp
//  
//
//  Created by Ngo Linh on 16/5/22.
//

#include "RecursiveBinarySearch.h"
#include <vector>
#include<iostream>
using namespace std;
RecursiveBinarySearch::RecursiveBinarySearch(){}

bool RecursiveBinarySearch::search(std::vector<int> sort_list, int x){
    if(BinarySearch(sort_list,0,sort_list.size()-1,x)==-1){
        return false;
    }
    return true;
}
int  RecursiveBinarySearch::BinarySearch(std::vector<int> sort_list, int left, int right,int x ){
     
        int mid=1+(right-1)/2;
        if(sort_list.at(mid)==x){
            return mid;
        }
        else if(left==right){
            return -1;
        }
        if(sort_list.at(mid)>x){
            return BinarySearch(sort_list,1,mid-1,x);
        }
        else {
        return BinarySearch(sort_list,mid+1,right,x);
        }
    return -1;
    }
    

 
RecursiveBinarySearch::~RecursiveBinarySearch(){}
