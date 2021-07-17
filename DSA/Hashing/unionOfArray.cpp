#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
int unionSize(int arr1[], int m, int arr2[], int n)
{
    unordered_set <int> us;
    for(int i = 0; i < m; i++)
    {
        us.insert(arr1[i]);
    }
    for(int i = 0; i < n; i++)
    {
        us.insert(arr2[i]);
    }

    return us.size();
}
int main(){

int arr1[] = {2, 8, 3, 5, 6};
int arr2[] = {4, 8, 3, 6, 1};
int m = sizeof(arr1)/sizeof(arr1[0]);
int n = sizeof(arr2)/sizeof(arr2[0]);
    
cout << unionSize(arr1, m, arr2, n);




return 0;
}

