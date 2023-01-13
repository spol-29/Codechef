#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(x > y){
			cout << "car" << endl;
		}
		if(y > x){
			cout << "bike" << endl;
		}else if(x == y){
			cout << "Same" << endl;
		}
	}
}
