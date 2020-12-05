#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        std::vector<int> arr;
        while (n--)
        {
            int w;
            cin >> w;
            arr.push_back(w);
        }
        sort(arr.begin(), arr.end());
    }
}
