#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		double mx = sqrt(pow(a,2)+pow(b,2));
		double mn = sqrt(pow(,2)-pow(b,2));
		cout << mn << " " << mx << endl;
	}
}
