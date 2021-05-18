#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

bool ifArraySorted(int arr[],int n) 
{
    for(int i = 0; i < (n-1); i++)
    {
        if(arr[i + 1] < arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{

int A[5] = {2,3,4,5,6};
cout << ifArraySorted(A, 5);
return 0;
}

