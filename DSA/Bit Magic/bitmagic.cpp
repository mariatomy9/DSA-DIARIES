#include <iostream>
using namespace std;

int main() {
	
	int x = 3, y = 6;
	unsigned int z = 1;
	
	cout<<(x & y)<<endl;
	
	cout<<(x | y)<<endl;
	
	cout<<(x ^ y)<<endl;

	cout<<(y >> 1)<<endl;//right shift used to make half of a number

	cout<<(~z)<<endl;
	
	
	return 0;
}