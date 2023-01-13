#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n,f=1,cnt=0;
		cin >> n;
		for(int i = n; i >= 1; i++){
			f *= i;
		}
		while(true){
			if(n%10 == 0){
				cnt++;
			}else{
				break;
			}
		}
		cout << cnt << endl;
	}
}


