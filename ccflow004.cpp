#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,sum=0,m=0;
		cin >> n;
		sum+=n%10;
		while(n != 0){
			m=n%10;
			n/=10;
		}
		sum+=m;
		cout << sum << endl;
		sum = 0;
	}
}


