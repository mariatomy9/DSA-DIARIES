#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
void printUnion(int a[], int b[], int m, int n)
{
    int c[m+n];
    for(int i = 0; i < m; i++)
    {
        c[i] = a [i];
    }
    for(int i = 0; i < n; i++)
    {
        c[m+i] = b[i];
    }
    sort(c ,c+m+n);
    for(int i = 0; i < m+n; i++)
    {
        if(i > 0 && c[i-1]!=c[i])
        {
            cout << c[i] << " ";
        }
    }
}
int main(){

    int a[]={3,8,10};
    int b[]={2,8,9,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	printUnion(a,b,m,n);



return 0;
}

