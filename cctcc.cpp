#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		if(min(a,b) == a && a!=b){
			cout << "FIRST" << endl;
		}else if(min(b,a) == b && a!=b){
			cout << "SECOND" << endl;
		}else if(a==b){
			cout << "ANY" << endl;
		}
	}
}

