#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int ZeroSumSubarray(int arr[], int n)
{
    int pre_sum = 0;
    unordered_set <int> us;

    for0(i, n)
    {
        pre_sum += arr[i];
        if(us.find(pre_sum) != us.end())
        {
            return 1;
        }
        us.insert(pre_sum);
    }
    return 0;
}
int main(){

int arr[] = {5, 3, 9, -4, -6, 7, -1};
int n = sizeof(arr)/sizeof(arr[0]);

cout << ZeroSumSubarray(arr, n);



return 0;
}

