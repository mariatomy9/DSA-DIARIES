#include <bits/stdc++.h>
using namespace std;
int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    long long t;
    cin >> t;
    
    while(t--){
		long long a,b;
		cin >> a >> b;
		long long e1 = a/2;
		long long o1 = a - e1;
		long long e2 = b/2;
		long long o2 = b - e2;
		
		
		cout << e1*e2+o1*o2 << "\n";
		
		}
    


}
