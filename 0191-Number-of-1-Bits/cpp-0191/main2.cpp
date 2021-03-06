/// Source : https://leetcode.com/problems/number-of-1-bits/description/
/// Author : liuyubobobo
/// Time   : 2018-08-29

#include <iostream>

using namespace std;


/// And Trick
/// Only one bit operation needed.
///
/// Time Complexity: O(32)
/// Space Complexity: O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {

        int res = 0;
        while(n){
            n &= (n - 1)
            res ++;
        }
        return res;
    }
};


int main() {

    return 0;
}