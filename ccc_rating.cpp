#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int x,y;
		if((y-x)%8==0){
			cout <<(y-x)/8 << endl;
		}else{
			cout <<((y-x)/8)+1 << endl;
		}
	}
}


