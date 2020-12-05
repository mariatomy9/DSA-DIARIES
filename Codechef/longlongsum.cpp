#include <bits/stdc++.h> 
using namespace std; 
int main(){

int n;
cin >> n ;
long long array[n];
for(int i=0;i<n;i++){
	cin >> array[i];
	}
long long sum = 0;
for(int i=0;i<n;i++){
	sum = sum + array[i];
	}
cout << sum;
return 0;



}

