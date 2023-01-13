#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int m,h; cin >> m >> h;
		if(m/pow(h,2) <= 18){
			cout << 1 << endl;
		}else if(m/pow(h,2) >= 19 && m/pow(h,2) <= 24){
			cout << 2 << endl;
		}else if(m/pow(h,2) >= 25 && m/pow(h,2) <= 29){
			cout << 3 << endl;
		}else if(m/pow(h,2) >=30){
			cout << 4 << endl;
		}
	}
}
