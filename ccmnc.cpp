#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%5){
			cout << -1 << endl;
		}
		else{
			cout << (n/10) + ((n%10)/5) << endl; 
		}
	}
}
