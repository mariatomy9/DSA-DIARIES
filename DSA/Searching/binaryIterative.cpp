#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
int bSearch(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return mid;

		else if(arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}
int main(){





return 0;
}

