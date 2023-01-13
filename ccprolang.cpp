#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int a,b,c,d,e,f;
		cin >> a >> b >> c >> d >> e >> f;
		if((a==c||b==c)&&(a==d||b==d)){
			cout << 1 << endl;
		}else if((a==e||b==e)&&(b==f||a==f)){
			cout << 2 << endl;
		}else {
			cout << 0 << endl;
		}
	}
}


