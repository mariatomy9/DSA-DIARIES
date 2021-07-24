#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int res = 0;
    for0(i,n)
    {
        int cur_sum = 0;
        for(int j = i; j < n; j++)
        {
            cur_sum += arr[j];
            if(cur_sum == sum)
            {
                res = max(res, (j - i) + 1);
            }
        }
    }
    return res;
}
int main(){

int arr[] = {8, 3, -7, -4, 1};
int n = sizeof(arr)/sizeof(arr[0]);
int sum = -8;
    
cout << largestSubarrayWithSumX(arr, n, sum);




return 0;
}

