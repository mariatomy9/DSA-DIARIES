#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        {
            break;
        }
    }
}
int main(){

int a[] = {2, 1, 3, 4};

bubbleSort(a, 4);
for(int i = 0; i < 4; i++)
{
	cout<<a[i]<<" ";
}

return 0;
}

