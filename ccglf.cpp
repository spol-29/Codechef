#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y,z;
	cin >> t;
	while(t--){
		cin >> x >> y >> z;
		cout << x+y+z - min({x,y,z}) << endl;
	}
}

