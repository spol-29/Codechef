#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string s,e,m;
	cin >> t;
	while(t--){
		cin >> s;
		cin >> e;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == e[i]){
				cout << "G";
			}else{
				cout << "B";
			}
		}
		cout << endl;
	}
}

