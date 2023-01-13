#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int x,y,z;
		cin >> x >> y >> z;
		if(z>=y+x){
			cout << 2 << endl;
		}else if(z >= x){
			cout << 1 << endl;
		}else{
			cout << 0 << endl;
		}
	}
}


