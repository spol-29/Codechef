#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,count = 0;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			int a;
			count += a;
			count +=k;
			if(count < 0){
				cout << "NO" << " " << i << endl;
				break;
			}
		}
		if(count >= 0){
			cout << "YES" << endl;
		}
		count = 0;
	}
}

