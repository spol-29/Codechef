#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t; int cnt = 0;
	cin >> t;
	while(t--){
		int p;
		cin >> p;
		for(int i = 1; i <= p; i++){
			int g;
			cin >> g;
			if(g >= 1000){
				cnt++;
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
}


