#ifndef SORT_H
#define SORT_H
#include<iostream>
#include <vector>
class Sort{
   
    public: //base class function for sort
    Sort();
    virtual std::vector <int> sort(std::vector<int>list)=0;
    
    ~Sort();
    protected:
    std::vector <int> Sortlist;
};

#endif
