
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

//Brian-kernigham Algoritham for finding set bits in a number
int countSetBit(int n)
{
     int res = 0;
     while(n > 0)
     {
         n = (n & (n-1));
         res++;
     }
     return res;
    
}

//total setbits present in number 1 to n.
int totalSetBits(int n)
{
    int i = 1;
    int count = 0;
    for(i; i <= n; i++)
    {
        count = count + countSetBit(i);
    }
    return count;
    
}

int main()
{
    cout << totalSetBits(7);
}
