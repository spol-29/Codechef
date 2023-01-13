#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v;
		for(int i = 1; i <= n; i++){
			int a;
			cin >> a;
			v.push_back(a);
		}
		for(int j = 0; j < n; j++){
			if(count(v.begin(),v.end(),v[j])%2==1){
				cout << v[j] << endl;
				break;
			}
		}
	}
}


