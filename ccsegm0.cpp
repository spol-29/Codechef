#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '1'&&s[i+1] == 1){
				cout << "YES" << endl;
			}else{
				cout << "NO" << endl;
			}
		}
	}
}


