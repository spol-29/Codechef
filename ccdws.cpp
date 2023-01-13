#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int z,y,a,b,c;
		cin >> z >> y >> a >> b >> c;
		if((z-y) >= (a+b+c)){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}
