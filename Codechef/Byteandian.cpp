#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true)
    {
        int n;
        cin >> n;
        int a, b, c;
        a = round(n / 2);
        b = round(n / 3);
        c = round(n / 4);
        if (a + b + c >= n)
        {
            cout << a + b + c << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}