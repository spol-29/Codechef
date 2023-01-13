#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,y,z;
	cin >> t;
	while(t--){
		cin >> x >> y >> z; 
		if(y-x <= z*2){
			cout << "yes"  << endl;
		}else{
			cout << "no" << endl;
		}
	}
}

