#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int countDistinct(int arr[], int n)
{
    unordered_set <int> S;
    for(int i = 0; i < n; i++)
    {   
        S.insert(arr[i]);
    }
    return S.size();
}

int main(){

int arr[] = {15, 16, 27, 27, 28, 15};
int n = sizeof(arr)/sizeof(arr[0]);
    
cout << countDistinct(arr, n);
    
return 0;
}

