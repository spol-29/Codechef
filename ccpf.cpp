#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,x,p,i,m;
	cin >> t;
	while(t--){
		cin >> n >> x >> p;
		if(x*3 - (n-x) >= p){
			cout << "PASS" << endl;
		}
		else{
			cout << "FAIL" << endl;
		}
	}
}
