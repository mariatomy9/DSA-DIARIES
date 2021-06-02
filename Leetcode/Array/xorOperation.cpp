#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
class Solution {
public:
    int xorOperation(int n, int start) {
        
        int res = 0 ;
        for(int i = 0; i < n; i++)
        {
            res ^= start + 2*i;
        }
        return res;
        
    }
    
    
    
    
    
};
int main(){





return 0;
}

