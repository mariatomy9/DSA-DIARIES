#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int countDistinct(int arr[], int n)
{

 unordered_map<int, int> mp;
 




 // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

int main()
{

int A[] = {10, 20, 20, 10, 30, 10};
int n = sizeof(A)/sizeof(A[0]);
countDistinct(A, n);
return 0;
}

