#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(min({a,b,c}) == b){
			cout << "Bob" << endl;
		}else if(min({a,b,c}) == c){
			cout << "Alice" << endl;
		}else{
			cout << "Draw" << endl;
		}
	}
}

