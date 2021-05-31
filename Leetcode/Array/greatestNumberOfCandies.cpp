#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> res;
        int biggestNumberOfCandies = *max_element(candies.begin(), candies.end());
        
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i]+extraCandies >= biggestNumberOfCandies){
                res.push_back(true);
            }else
            {
                res.push_back(false);   
            }
        }
        return res;
    }
};
int main(){





return 0;
}

