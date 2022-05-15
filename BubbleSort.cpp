//
//  BubbleSort.cpp
//  
//
//  Created by Ngo Linh on 14/5/22.
//

#include "BubbleSort.h"
#include <utility>
using namespace std;
BubbleSort::BubbleSort(){};
std::vector<int>BubbleSort::sort(std::vector<int>list){
    int i,j;
    for(i=0;i<(int)list.size()-1;i++){
        //last element is already in place
        for(j=0;j<(int)list.size()-1-1;j++){
            if(list.at(j)>list.at(j+1)){
                swap(list.at(j),list.at(j+1));
            }
        
    }
}
    return list;
}
BubbleSort::~BubbleSort(){};
