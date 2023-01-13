#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int d,n,sum;
		sum=0;
		cin >> d >> n;
		for(int i = 1; i <= d*n; i++){
			sum+=i;
		}
		cout << sum << endl;
	}
}

