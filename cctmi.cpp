#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,c=0;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%10 != 0){
			c++;
		}
		cout << (n/10)+c << endl;
		c=0;
	}
}

