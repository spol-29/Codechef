#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		int q = n/3;
		int r = n%3;
		cout << (2*(r+q))*x << endl;
		q =0;
		r = 0;
	}
}


