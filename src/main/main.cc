#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include "src/lib/solution.h"

using namespace std;


int main()
{
    MaxHeap m;
    m.push(9);
    m.push(8);
    m.push(6);
    m.push(5);
    m.push(3);
    m.push(10);

    cout << m.size_() << endl;
    cout << m.GetParentIndex(2) << endl;
    m.PrintVector();
    // cout << m.GetLeftIndex(3) << endl;
    // m.pop();
    // m.PrintVector();
    m.TrickleUp(10);
    m.PrintVector();

    


    return EXIT_SUCCESS;

}
