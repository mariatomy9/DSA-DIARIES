#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops



using namespace std;

int main(){

    int a = 6;
    int* p = &a;

    int** q = &p;//pointer to pointer
    cout <<"Address of "<< p << endl;
    cout <<"Address of "<< p + 1 << endl;



return 0;
}

