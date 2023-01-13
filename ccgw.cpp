#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int r,s,x;
		for(int i = 1; i <= 7; i++){
			cin >> x;
			if(x == 1){
				s++;
			}else if(x == 0){
				r++;
			}
			if(i == 7){
				if(s > r){
					cout << "YES" << endl;
					r=0;
					s=0;
				}else if(r >= s){
					cout << "NO" << endl;
					r=0;
					s=0;
				}	
			}
		}

	}
}	
