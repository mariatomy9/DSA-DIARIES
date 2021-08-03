#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

void merge( int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;

    int arrLeft[n1];
    int arrRight[n2];

    for(int i = 0; i < n1; i++)
    {
        arrLeft[i] = arr[i - l];
    }
    for( int j = 0; j < n2; j++)
    {
        arrRight[j] = arr[m+1+j];
    }
}
int main(){

    int a[]={10,15,20,40,8,11,15,22,25};
	int l=0,h=8,m=3;
	
	merge(a,l,m,h);
	
    for(int x: a)
	    cout<<x<<" ";




    return 0;
}

