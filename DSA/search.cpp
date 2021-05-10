#include <iostream>
#include <cmath>
using namespace std;

int arraySearch(int arr[], int n, int x)
{

    for(int i = 0; i < n; i++)
    {
 
        if(arr[i]==x)
        {
        return i;
        }
    }
return -1;

}

int main()
{

int A[] = {1,2,3,4};
int n = sizeof(A)/sizeof(A[0]);

cout<<arraySearch(A,n,2);


}
