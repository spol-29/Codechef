#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			int a;
			cin >> a;
			if(k-a >= 0){
				k-=a;
				cout << 1;
			}else{
				cout << 0;
			}
		}
		cout << endl;
	}
}



