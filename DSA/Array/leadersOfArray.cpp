#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

void leaderOfArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {   
        bool flag = false;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i]<=arr[j])
            {
                flag = true;
                break;
            }
        }if(flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}

int main(){

    int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;

    leaderOfArray(arr, n);

    return 0;
}

