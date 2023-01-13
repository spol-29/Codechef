#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		cout << min(x/2,y) << endl;
	}
}
