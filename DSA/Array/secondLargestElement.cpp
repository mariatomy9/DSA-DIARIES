#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
 
    /* There should be atleast two elements */
    if (arr_size < 2) {
        printf(" Invalid Input ");
        return;
    }
 
    int largest = second = INT_MIN;
 
    // find the largest element
    for (int i = 0; i < arr_size; i++) {
        largest = max(largest, arr[i]);
    }
 
    // find the second largest element
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] != largest)
            second = max(second, arr[i]);
    }
    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %d\n", second);
}
int main(){





return 0;
}

