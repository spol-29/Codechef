#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n,x,k;
	cin >> t;
	while(t--){
		cin >> n >> x >> k;
		cout << min(n,k/x); << endl;
	}
}
