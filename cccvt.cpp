#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int x,y,z;
		cin >> x >> y >> z;
		if((x+y) > z){
			cout << "Train" << endl;
		}else if((x+y) < z){
			cout << "planebus" << endl;
		}else if((x+y) == z){
			cout << "equal" << endl;
		}
	}
}
