#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int main()
{

unordered_map <string, int> m;

//Inserting by insert()
m.insert({"a",1});
m.insert({"b",2});
m.insert({"c",3});

//Accessing or inserting
m["d"] = 4;
m["e"] = 5;

auto it = m.find("a");
cout <<(it -> second) << endl;



return 0;
}

