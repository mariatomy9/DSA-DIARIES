#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int main(){

unordered_set <int> S;
S.insert(5);
S.insert(12);
S.insert(10);
S.insert(11);

//for(int x: S)
//{
//    cout << x << "  ";
//}

for(auto it = S.begin(); it != S.end(); it++)
{
    cout << *it << " ";
}

cout<< S.size();
S.clear();
cout<< S.size();

return 0;
}

