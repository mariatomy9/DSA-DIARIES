#include <bits/stdc++.h> 
using namespace std; 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int A[n];
		int presentDays = 0;
		for(int i = 0; i < n; i++){
			cin >> A[i];
			if(A[i] == 1){
				presentDays = presentDays+1;
				}
			}
		int PercentageremainingDaysPresent = ((120-n) + presentDays)/100;
		if(PercentageremainingDaysPresent >= 0.75){
			cout << "YES" << endl;
			}else{
				cout << "NO"<< endl;}
		
		
		}
		return 0;
	}
