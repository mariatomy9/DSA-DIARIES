


#include<iostream>

using namespace std;

void nToOne(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << " ";
        nToOne(n - 1);
    }
}

int main()
{
    nToOne(16);
    return 0;
}
