#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int main(){

int arr[]={10,20,5,7};
int n = sizeof(arr) / sizeof(arr[0]);

sort(arr, arr+n);

for(int x : arr)
{
    cout << x << " ";
}

sort(arr, arr+n, greater<int>());

cout << endl;

for(int x: arr)
{
    cout << x << " ";
}

return 0;
}

