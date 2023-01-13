#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,c=0;
	cin >> t;
	while(t--){
		cin >> n;
		while(n != 0){
			if(n%10 == 4)
				c++;
			n/=10;
		}
		cout << c << endl;
		c=0;
	}
}

