#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,a,y,b;
		cin >> x >> a >> y >> b;
		cout << (y/x)+(b/a) << endl;
	}
}
