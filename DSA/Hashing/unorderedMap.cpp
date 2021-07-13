#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int main(){

unordered_map <string, int> m;

m.insert({"amal",12});
m["gfg"]=10;

for(auto it = m.begin(); it != m.end(); it++)
{
    cout<<"  "<<it->first<<" "<<it->second<<endl;
}




return 0;
}

