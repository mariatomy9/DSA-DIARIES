#include <iostream>
using namespace std;

void checkBitSet(int n, int k){
	if (n & (1 << (k-1)) != 0)
	{
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}
int main() {
checkBitSet(5,2);

return 0;

}
