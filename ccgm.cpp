#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,x,y; cin >> n >> x >> y;
		if((n+1)*y >= x){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}
