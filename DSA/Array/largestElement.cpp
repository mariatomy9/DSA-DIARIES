#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int LargestElement(int arr[], int x){

//some variables

int i;
     
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;

}

