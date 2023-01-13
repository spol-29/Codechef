#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin >> t;
	while(t--)
		cin >> a >> b;
		if(1 <= 21-a-b <= 10){
			cout << 21-a-b << endl;
		}
		else{
			cout << -1 << endl;
		}
}
