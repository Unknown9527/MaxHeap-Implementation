#include "solution.h"
#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

using namespace std;

int MaxHeap::GetParentIndex(int i) // O(1)
{
    return (i - 1) / 2;
}

int MaxHeap::GetLeftIndex(int i) // O(1)
{
    return (2 * i + 1);
}

int MaxHeap::GetRightIndex(int i) // O(1)
{
    return (2 * i + 2);
}

int MaxHeap::GetSmallestChildIndex(int i) // O(1)
{
    if (data_[GetLeftIndex(i)] < data_[GetRightIndex(i)])
    {
        return GetLeftIndex(i);
    }else
    {
        return GetRightIndex(i);
    }
}

// Write this for trickle down
int MaxHeap::GetLargestChildIndex(int i) // O(1
{
    if (data_[GetLeftIndex(i)] > data_[GetRightIndex(i)])
    {
        return GetLeftIndex(i);
    }else
    {
        return GetRightIndex(i);
    }
}

int MaxHeap::GetLeft(int i) // O(1)
{
    return data_[2 * i + 1];
}

int MaxHeap::GetRight(int i) // O(1)
{
    return data_[2 * i + 2];
}

int MaxHeap::GetParent(int i) // O(1)
{
    return data_[(i - 1) / 2];
}

int MaxHeap::size_() // O(1)
{
    return data_.size();
}

bool MaxHeap::empty() // O(1)
{
    if (data_.size() == 0)
    {
        return true;
    }else
    {
        return false;
    }    
}

void MaxHeap::TrickleUp(int i) // O(n)
{
    // ? <= parents
    if (data_[i] > data_[GetParentIndex(i)])
    {
        // swap i and its parent
        swap(data_[i], data_[GetParentIndex(i)]);

        // call for parent
        TrickleUp(GetParentIndex(i));
    }
}

void MaxHeap::TrickleDown(int i) // O(n
{
    // cannot use smallest child directly
    if (data_[i] > data_[GetLargestChildIndex(i)])
    {
        swap(data_[i], data_[GetSmallestChildIndex(i)]);

        // call for Smallest Child
        TrickleDown(GetSmallestChildIndex(i));
    }
    
}

// int MaxHeap::top() // O(n)
// {
//     try
//     {
//         // if empty, error
//         if (size_() == 0)
//         {
//             throw out_of_range("GGWP, Out of Range\n");
//             // replace root and last element

//             return data_.at(0);

//         }
        
//     }
//     catch (const out_of_range& OoR)
//     {
//         cout << "\n" << OoR.what();
        
//     }
//     return -1;
// }

int MaxHeap::top() // O(1)
{
    return data_[0];
}

void MaxHeap::push(int v) // O(N)
{
    // insert a new element at the end
    data_.push_back(v);

    //get call TrickleUp
    int temp = size_() - 1;
    TrickleUp(temp);
}

// void MaxHeap::pop() // O(N)
// {
//     try
//     {
//         if (size_() == 0)
//         {
//             throw out_of_range("GGWP, Out of Range");
//             // replace root and last element
//             data_[0] = data_.back();
//             data_.pop_back();
//             // call trickle down for root
//             TrickleDown(0);
//         }
        
//     }
//     catch (const out_of_range& OoR)
//     {
//         cout << "\n" << OoR.what();
//     }
// }

void MaxHeap::pop() // O(N)
{
    reverse(data_.begin(), data_.end());
    data_.pop_back();
    reverse(data_.begin(), data_.end());
}

void MaxHeap::PrintVector() // O(N)
{
    for(int i =0; i < data_.size(); i++){
        cout << data_[i] <<" ";
    }
    cout << endl;
}
