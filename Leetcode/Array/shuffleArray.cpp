#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0; i<nums.size()/2; i++) 
    {
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
    }
    
    return ans;
        
    }
};
int main(){





return 0;
}

