#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

using namespace std;

class MaxHeap
{
  
public:
    MaxHeap(){}; // default constructor
    ~MaxHeap(){};

    int GetParentIndex(int i); // **GT** 
    int GetLeftIndex(int i); // **GT**
    int GetRightIndex(int i); // **GT**
    int GetSmallestChildIndex(int i); // **GT**
    int GetLargestChildIndex(int i); // used for trickle down

    int GetLeft(int i);
    int GetRight(int i);
    int GetParent(int i);

    int top(); // GT
    void push(int v); // GT
    void pop(); // GT
    void TrickleUp(int i);
    void TrickleDown(int i);

    bool empty();
    int size_();

    void PrintVector();

    // vector<int> data_;


private:
    //vector to store heap elements
    vector<int> data_;

};

#endif