#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++)
        {   reverse(image[i].begin(), image[i].end());
         
            for(int j = 0; j < image[i].size(); j++)
            {
              image[i][j] ^= 0x1;
            }
        }
        return image;
    }
};

int main(){





return 0;
}

