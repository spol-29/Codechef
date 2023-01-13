#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int k,m,n;
		cin >> n >> m >> k;
		if(m-k >= n){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
}
