#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int main(){

vector <int> V = {23,4,45,1,5,3,2};

sort(V.begin(),V.end());

for(int x: V)
{
    cout << x << " ";
}
cout << endl;

sort(V.begin(), V.end(), greater<int>());

for(int x: V)
{
    cout << x << " ";
}
return 0;
}

