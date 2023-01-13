#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a,c=0;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i <= n; i++){
			cin >> a;
			if(60 >=a && a >= 10){
				c++;
			}	
		}
		cout << c << endl;
	}
}
