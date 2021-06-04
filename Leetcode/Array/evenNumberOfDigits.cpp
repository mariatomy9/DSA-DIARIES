#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n, count = 0;
        for(int i = 0; i < nums.size(); i++)
        {         
                n = nums[i];
                if((10 <= n && n < 100) || (1000 <= n && n <= 9999 ) || (n == 100000)){
                    
                    count++;
                }
        }
        return count;
    }

};
int main(){





return 0;
}

