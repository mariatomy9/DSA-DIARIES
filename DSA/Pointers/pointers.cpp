#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int main(){

    int a = 6;
    int* p = &a;

    int** q = &p;//pointer to pointer
    cout <<"Address of "<< p << endl;
    cout <<"Address of "<< p + 1 << endl;



return 0;
}

