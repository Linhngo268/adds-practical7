//
//  assignment7-main.cpp
//  
//
//  Created by Ngo Linh on 16/5/22.
//

#include <stdio.h>
#include <iostream>
#include<string>
#include<vector>
#include <sstream>
#include"Sort.h"
#include"BubbleSort.h"
#include"QuickSort.h"
#include"RecursiveBinarySearch.h"
int main(){
     
    std::string list;
    getline(std::cin,list);
    list=list+ ' ';
    std::vector<int>Unsort_list;
    std::vector<int>Sorted_list;
    std::string temp;
    for(int i=0;i<(int)list.length();i++){
        if(!isspace(list[i])){
            temp=temp+list[i];
        }
        else{
            std::stringstream buffer(temp);
            int number;
            buffer >> number;
            Unsort_list.push_back(number);
            temp.clear();
        }
    }
    
     
        QuickSort sort_q;
        Sorted_list=sort_q.sort(Unsort_list);
        
    
    bool find_a_six = false;
        RecursiveBinarySearch six;

        find_a_six = six.search(Sorted_list,1);

        if (find_a_six){
            std::cout << "true" << " ";
        }
        else{
            std::cout << "false" << " ";
            }
    for (int i = 0; i < (int)Sorted_list.size(); i++){
            std::cout << Sorted_list.at(i) << " ";
        }

        std::cout << std::endl;
    return 0;
}

