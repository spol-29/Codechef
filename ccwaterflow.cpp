#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int w,x,y,z;
		cin >> w >> x >> y >> z;
		if((x-w)+(y*z) == w){
			cout << "Filled" << endl;
		}else if((x-w)+(y*z) >= w){
			cout << "Overflow" << endl;
		}else if((x-w)+(y*z) <= w){
			cout << "Unfilled" << endl;
		}
	}
}


