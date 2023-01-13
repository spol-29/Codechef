#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int r,l,n,m;
		cin >> n >> m;
		r=n; l=n;
		if(m>l){
			m=l;
		}
		l-=m;
		cout << r+l << endl;
	}
}

