#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
void lRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n - 1] = temp;

}
void leftRotateByD(int arr[], int n, int d)
{
    for(int i = 0; i < d; i++){
        lRotateOne(arr, n);
    }

}

int main(){
int A[] = {1,2,3,4,5};
int n = sizeof(A)/sizeof(A[0]);
int d = 2;
leftRotateByD(A, n, d);
for(int i = 0; i < n; i++)
{
    cout << A[i] << " " ; 

}




return 0;
}

