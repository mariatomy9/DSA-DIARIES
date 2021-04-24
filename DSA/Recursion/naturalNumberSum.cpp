#include<iostream>
using namespace std;


int naturalNumberSum(int n)
{
if(n == 0)
{
 return 0;

}
return n + naturalNumberSum(n - 1);

}

int main()
{

int n;
cin >> n ;
cout << naturalNumberSum(n);


}
