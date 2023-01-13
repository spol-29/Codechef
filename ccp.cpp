#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,m,n,k;
	cin >> t;
	while(t--){
		cin >> m >> n >> k;
		if(m > n*k){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}
}
