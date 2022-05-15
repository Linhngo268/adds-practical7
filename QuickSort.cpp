//
//  QuickSort.cpp
//  
//
//  Created by Ngo Linh on 14/5/22.
//

#include "QuickSort.h"
 
std::vector<int> QuickSort::Pivot(std::vector<int>list,int left,int right){
    int i=left;
    int j=right;
    int temp;
    int pivot=list.at(i+1);
    while(i<=j){
        while(list.at(i)<pivot){
            i++;
        }
        while (list.at(j)>pivot){
            j--;
        }
        if(i<=j){
            temp=list.at(i);
            list.at(i)=list.at(j);
            list.at(j)=temp;
            i++;
            j--;
            
        }
    }
    if(left<j){
        list=Pivot(list,left,j);
    }
    if(i<right){
        list=Pivot(list,i,right);
    }
    return list;
}
std::vector<int> QuickSort::sort(std::vector<int> list){
    int left=0;
    int right=list.size()-1;
    list=Pivot(list,left,right);
    return list;
    
}

 
