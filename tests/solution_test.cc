#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;
//         9                         0
//     8       6              1            2
//   5   3    2            3     4       5
TEST(Test0, Test0) {
  MaxHeap m;
    m.push(9);
    m.push(8);
    m.push(6);
    m.push(5);
    m.push(3);
    m.push(2);

  vector<int> input0 = {9,8,6,5,3,2}; 
  int result0 = 0;
  int result1 = 3;
  int result2 = 2;
  int result3 = 3;
  int result4 = 9;

 
  EXPECT_EQ(m.GetParentIndex(2), result0);
  EXPECT_EQ(m.GetLeftIndex(1), result1);
  EXPECT_EQ(m.GetRightIndex(0), result2);
  EXPECT_EQ(m.GetLargestChildIndex(1), result3);
  EXPECT_EQ(m.top(), result4);
}

// test pop() by using top()
TEST(Test1, Test1) {
  MaxHeap m;
    m.push(9);
    m.push(8);
    m.push(6);
    m.push(5);
    m.push(3);
    m.push(2);
    m.pop();

    int result5 = 8;

  EXPECT_EQ(m.top(), result5);
}





