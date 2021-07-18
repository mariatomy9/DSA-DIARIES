#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

bool pairWithSumX(int arr[], int n, int X)
{
    unordered_set <int> us;
    for0(i,n)
    {
        if(us.find(X - arr[i]) != us.end())
        {
            return true;
        }
        us.insert(arr[i]);
    }
    return false;
}
int main(){

int arr[] = {3, 8, 4, 7, 6, 1};
int n = sizeof(arr)/sizeof(arr[0]);
int X = 14;
cout << pairWithSumX(arr, n, X);

return 0;




return 0;
}

