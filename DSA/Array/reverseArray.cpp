#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

void reverseArray(int arr[], int n)
{
int low = 0;
int high = n-1;

while(low<high)
{
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high]= temp;
    low++;
    high--;
}
}


int main(){

int A[6] = {1,2,3,4,5,6};
reverseArray(A, 6);
for(int i = 0; i< 6; i++)
{
cout << A[i] <<" " << endl;

}
return 0;
}

