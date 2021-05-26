#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
int maximumDifference(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
           res = max( res, arr[j] -  arr[i] );
        }
    }return res;

}




int main(){

    int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;
    cout<<maximumDifference(arr, n);



return 0;
}

