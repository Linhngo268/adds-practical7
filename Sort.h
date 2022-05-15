#ifndef SORT_H
#define SORT_H
#include<iostream>
#include <vector>
class Sort{
   
    public: //base class function for sort
     
    virtual std::vector <int> sort(std::vector<int>list)=0;
    
     
    protected:
    std::vector <int> Sortlist;
};

#endif
