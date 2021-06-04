#include <bits/stdc++.h>  // This will work only for g++ compiler

//Macros for loops
#define for0(i, n) for (int i = 0; i < (int)(n); i++)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) 

using namespace std;
 int power(int x, int n)
{
	if(n == 0)
		return 1;

	int temp = power(x, n/2);

	temp = temp * temp;

	if(n % 2 == 0)
		return temp;
	else
		return temp * x; 
}
int main(){





return 0;
}

