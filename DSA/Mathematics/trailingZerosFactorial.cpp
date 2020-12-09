#include <bits/stdc++.h>
using namespace std;
int countZero(int n){
	int fact = 1;
	for(int i =1; i<=n ; i++){
		fact = fact*i;
		}
	int res = 0;
	while(fact%10 == 0){
		res = res+1;
		fact = fact/10;
		}
		return res;
	
	
	
	
	}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    }
