#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x,m,d;
	cin >> t;
	while(t--){
		cin >> x >> m >> d;
		if(x*m < d+x){
			cout << x*m << endl;
		}else{
			cout << d+x << endl;
		}
	}
}

