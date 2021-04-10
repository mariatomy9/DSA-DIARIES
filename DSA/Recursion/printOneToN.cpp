
#include<iostream>

using namespace std;

void printOneToN(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printOneToN(n - 1);
        cout << n << " ";
        
    }
}

int main()
{
    printOneToN(16);
    return 0;
}
