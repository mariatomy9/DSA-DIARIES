#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         for(int i=1; i<nums.size(); i++)
        {
            nums[i] += nums[i-1] ;
        }
        return nums ;
    }
};

int main(){





return 0;
}

