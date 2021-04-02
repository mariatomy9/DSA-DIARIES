
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int smallest(int x, int y, int z)
{
    int c = 0;
    while(x && y && z)
    {
        x = x - 1;
        y = y - 1;
        z = z - 1;
        c = c + 1;
    }
    return c;
}

int main()
{
    cout << smallest(4,5,6);
}
