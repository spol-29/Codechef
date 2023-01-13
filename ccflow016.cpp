#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		int a,b,gcd,lcm;
		int MX = max(a,b);
		int MN = min(a,b);
		cin >> a >> b;
		for(int i = MX; i >=1; i--){
			if(a%i == 0 && b%i == 0){
				gcd=i;
				break;
			}
		}
		int j = MN;
		while(true){
			if(j%a == 0 && j%b == 0){
				lcm=j;
				break;
			}
			j++;
		}
		 cout << gcd << " " << lcm << endl;
		 gcd = 0;
		 lcm = 0;
	}
}


