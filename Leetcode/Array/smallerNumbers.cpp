#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int>res;
        
        for(int i = 0; i < nums.size(); i++)
        {   
            int count = 0;
            
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            res.push_back(count);
            
        }
        return res;
        
        
    }
};
int main(){





return 0;
}

