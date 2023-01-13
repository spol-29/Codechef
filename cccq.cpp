#include<bits/stdc++.h>
using namespace std;

int main(){
	inta,b,c,d;
	cin >> t;
	while(t--){
		cin >> t,a >> b >> c >> d;
		if(a+c == 180 && b+d == 180){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}
