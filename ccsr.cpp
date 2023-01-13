#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x1,x2,x3,v1,v2;
		cin >> x1 >> x2 >> x3 >> v1 >> v2;
		int d1 = x3-x1, d2 = x2-x3;
		if(d2/v2 < d1/v1){
			cout << "Kefa" << endl;
		}else if(d2/v2 > d1/v1){
			cout << "Chef" << endl;
		}else{
			cout << "Draw" << endl;
		}
	}
}
