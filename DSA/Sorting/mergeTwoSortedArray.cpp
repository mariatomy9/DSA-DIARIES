#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int i, j = 0;
    while(i < m && i < n)
    {
        if(a[i] <=  b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while(i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while(j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}
int main(){
    
    int a[]={10,15,20,40};
    int b[]={5,6,6,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	merge(a,b,m,n);

    return 0;
}

