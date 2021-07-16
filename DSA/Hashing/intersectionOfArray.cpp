#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;

int intersection(int arr1[], int arr2[], int m, int n)
{

    unordered_set<int> us(arr1, arr1+m);
    
    int res = 0;  
    for(int i = 0; i < n; i++)
    {
        if(us.find(arr2[i]) != us.end())
        {
            res++;
            us.erase(arr2[i]);
        }
    }
    return res;









    

}
int main(){

int arr1[] = {15, 17, 27, 27, 28, 15};
int arr2[] = {16, 17, 28, 17, 31, 17};
int m = sizeof(arr1)/sizeof(arr1[0]);
int n = sizeof(arr2)/sizeof(arr2[0]);
    
cout << intersection(arr1, m, arr2, n);



return 0;
}

