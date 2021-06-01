#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0, m = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            for(int j = 0; j < accounts[i].size(); j++)
            {
                sum = sum + accounts[i][j];
            }
            m = max(sum,m);
            sum = 0;
        }
        return m;
        
    }
};



int main(){





return 0;
}

