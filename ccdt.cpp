#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b,c,maxm;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
 		maxm = max({a,b,c}); 
		cout << maxm << endl;
	}
}
